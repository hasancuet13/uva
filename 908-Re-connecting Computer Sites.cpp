///I am not an authorized coder!
#include<bits/stdc++.h>
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
#define all(v)          v.begin(), v.end()
#define PI              acos(-1.0)
#define mem(ara, value) memset(ara, value, sizeof(ara))
#define paii            pair<int, int>
#define pall            pair<ll, ll>
#define SZ(a)           int(a.size())
#define open()          freopen("input.txt", "r", stdin)
#define show()          freopen("output.txt", "w", stdout)
#define take(args...)   asdf,args
#define dump(x)         cerr<<#x<<" = "<<x<<endl
#define debug(args...)  cerr,args; cerr<<endl;
#define vci             vector<int>
#define vcc             vector<char>
#define vcs             vector<string>
#define read(a)         scanf("%d",&a)
#define read2(a,b)      scanf("%d%d",&a,&b)
#define read3(a,b,c)    scanf("%d%d%d",&a,&b,&c)
#define readI1(a)       scanf("%I64d",&a)
#define readI2(a,b)     scanf("%I64d %I64d",&a,&b)
#define readI3(a,b,c,d) scanf("%I64d %I64d %I64d %I64d",&a,&b,&c,&d)
#define Max 100000
#define BOUNDARY(i, j)  ((i >= 0 && i < w) && (j >= 0 && j < h))
using namespace std;
int kdx[]={-1,-1,-1,0,0,1,1,1};
int kdy[]={-1,0,1,-1,1,-1,0,1};
int dx[]={0, 1, 0, -1};
int dy[]={-1, 0, 1, 0};
int pr[1000005],cnt,sum,n;
struct edge{
    int u,v,w;
    edge(int U,int V,int W){
        u=U;
        v=V;
        w=W;
    }

};
vector<edge>e;
bool cmp(edge a, edge b)
{
    return a.w<b.w;
}
int dis_set(int r)
{
    return (pr[r]==r)?r:dis_set(pr[r]);
}
int mst(void)
{
    sort(e.begin(),e.end(),cmp);
    for(int i=0;i<=n;i++){
        pr[i]=i;
    }
    cnt=0,sum=0;
    for(int i=0;i<e.size();i++){
        int x=dis_set(e[i].u);
        int y=dis_set(e[i].v);
        if(x!=y){
            pr[x]=y;
            cnt++;
            sum+=e[i].w;
            if(cnt==n-1) break;
        }
    }
    return sum;
}
int main()
{
    int cas=0,u,v,w,N,t,ti,ans;
    while(read(N)==1)
    {
        int m=N-1;
        e.clear();
        int tlcost=0;
        for(int i=0;i<m;i++){
            read3(u,v,w);
            tlcost+=w;
        }
        read(t);
        for(int i=0;i<t;i++)
        {
            read3(u,v,w);
            e.push_back(edge(u,v,w));
        }
        read(ti);
        for(int i=0;i<ti;i++)
        {
            read3(u,v,w);
            e.push_back(edge(u,v,w));
        }
        n=t+ti;
        ans=mst();
        if(cas++) pf("\n");
        pf("%d\n%d\n",tlcost,ans);
    }
    return 0;
}
