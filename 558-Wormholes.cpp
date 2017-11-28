#include<bits/stdc++.h>
#define FOR(i, s, e) for(int i=s; i<e; i++)
#define loop(i, n) FOR(i, 0, n)
#define sf scanf
#define pf printf
#define pb push_back
#define MP make_pair
#define fr first
#define sc second
#define ll long long
#define dd double
#define all(v) v.begin(), v.end()
#define PI acos(-1.0)
#define mem(ara, value) memset(ara, value, sizeof(ara))
#define paii pair<int, int>
#define pall pair<ll, ll>
#define SZ(a) int(a.size())
#define open() freopen("input.txt", "r", stdin)
#define show() freopen("output.txt", "w", stdout)
#define take(args...) asdf,args
#define dump(x) cerr<<#x<<" = "<<x<<endl
#define debug(args...) cerr,args; cerr<<endl;
#define vci vector<int>
#define vcc vector<char>
#define vcs vector<string>
#define read(a) scanf("%d",&a)
#define read2(a,b) scanf("%d%d",&a,&b)
#define read3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define readI1(a) scanf("%I64d",&a)
#define readI2(a,b) scanf("%I64d %I64d",&a,&b)
#define readI3(a,b,c,d) scanf("%I64d %I64d %I64d %I64d",&a,&b,&c,&d)
#define Max 100000
#define BOUNDARY(i, j) ((i >= 0 && i < w) && (j >= 0 && j < h))
using namespace std;
int edge_u[Max],edge_v[Max],cost[Max],dist[Max],prev[Max];
int main()
{
    int t,n,e,cas=1;
    read(t);
    while(t--)
    {
        read2(n,e);
        for(int i=0;i<e;i++){
            read3(edge_u[i],edge_v[i],cost[i]);
        }
        for(int i=0;i<=n;i++){
            dist[i]=1000000000;
        }
        dist[0]=0;
        bool neg_cl=false;
        for(int st=0;st<=n;st++)
        {
            bool updt=false;
            for(int i=0;i<=e;i++){
                int u=edge_u[i],v=edge_v[i];
                if(dist[u]+cost[i]<dist[v]){
                    updt=true;
                    if(st==n){
                        neg_cl=true;
                        break;
                    }
                    dist[v]=dist[u]+cost[i];
                    prev[v]=u;
                }
            }
            if(updt=false) break;
        }
        if(neg_cl) printf("possible\n",cas++);
        else printf("not possible\n");
    }
    return 0;
}
