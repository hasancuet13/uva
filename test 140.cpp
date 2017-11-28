#include <bits/stdc++.h>
#define FOR(i, s, e)    for(int i=s; i<e; i++)
#define loop(i, n)      FOR(i, 0, n)
#define sf              scanf
#define pf              printf
#define pb              push_back
#define MP              make_pair
#define fr              first
#define sc              second
#define ll              long long
#define dd              double
#define N 26
using namespace std;

bool adj[N][N];
int ans[8],mapi[N];
int solver(int n);
int main()
{
    bool is_node[N];
    char str[100];
    while(gets(str) && str[0]!='#')
    {
        int i=0,idx=0,u;
        for(i=0;i<N;i++)
        {
            mapi[i]=-1,is_node[i]=false;
        }
        for(i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                adj[i][j]=false;
            }
        }
        i=0;
        while(str[i])
        {
            u=str[i]-'A';
            if(!is_node[u])
            {
                mapi[idx++]=str[i]-'A';
                is_node[u]=true;
            }
            i+=2;
            while(str[i]!=';' and str[i])
            {
                int v=str[i]-'A';
                if(!is_node[v])
                {
                    mapi[idx++]=v;
                    is_node[v]=true;
                }
                adj[u][v]=true;
                i++;
            }
            if(str[i])
            {
                i++;
            }
        }
        int mini=solver(idx);
        for(i=0;i<idx;i++)
        {
            printf("%c ",mapi[ans[i]]+'A');
        }
        printf("-> %d\n",mini);
    }
    return 0;
}

int solver(int n)
{
    int order[8];
    bool next= true;
    int i,min_bw=100;
    sort(mapi,mapi+n);
    for(i=0;i<n;i++){
        order[i]=i;
    }
    while(next){
        int maxi=0;
        for(i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                if(adj[mapi[order[i]]][mapi[order[j]]] and abs(i-j)>maxi){
                    maxi=abs(i-j);
                }
            }
        }
        if(maxi<min_bw)
        {
            min_bw=maxi;
            for(i=0;i<n;i++)
            {
                ans[i]=order[i];
            }
        }
        next=next_permutation(order,order+n);
    }
    return min_bw;
}
