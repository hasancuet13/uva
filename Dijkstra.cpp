#include<bits/stdc++.h>
using namespace std;
vector<int>G[100];
vector<int>cost[100];
int u,v,w,n,e,src;
void shortest_path(int src)
{
    int d[100];
    for(int i=1;i<=n;i++)
        d[i]=1000000000;
    queue<int>Q;
    Q.push(src);
    d[src]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0;i<(int)G[u].size();i++)
        {
            int v=G[u][i];
            if(d[u]+cost[u][i]<d[v])
            {
                d[v]=d[u]+cost[u][i];
                Q.push(v);
            }
        }
        Q.pop();
    }
    for(int i=1;i<=n;i++){
        cout<<src<<' '<<i<<' '<<d[i]<<endl;
    }
}
int main()
{
    ///freopen("input (2).txt","r",stdin);
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        cin>>u>>v>>w;
        G[u].push_back(v);
        cost[u].push_back(w);
    }
    cin>>src;
    shortest_path(src);
}
