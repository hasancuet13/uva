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
int parent[50005],n,m,sum,cnt;
struct edge{
    int u,v,w;
    edge(int U,int V,int W){
        u=U;
        v=V;
        w=W;
    }
};
vector<edge>e;
bool cmp(edge a,edge b)
{
    return a.w<b.w;
}
int find(int r)
{
    return (parent[r]==r)?r:find(parent[r]);
}
int mst(void)
{
    sort(e.begin(),e.end(),cmp);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }
    sum=0,cnt=0;
    for(int i=0;i<e.size();i++){
        int x=find(e[i].u);
        int y=find(e[i].v);
        if(x!=y)
        {
            parent[x]=y;
            cnt++;
            sum+=e[i].w;
            if(cnt==n-1) break;
        }
    }
    return sum;
}
int main()
{
   int t,w,cas=0,idx;
   string s1,s2;
   read(t);
   getchar();
   getchar();
   while(t--){
      read2(n,m);
      getchar();
      map<string,int>mp;
      idx=0;
      for(int i=0;i<m;i++){
        cin>>s1>>s2;
        read(w);
        if(!mp[s1]) mp[s1]=++idx;
        if(!mp[s2]) mp[s2]=++idx;
        e.push_back(edge(mp[s1],mp[s2],w));
      }
      if(cas++) pf("\n");
      int ans=mst();
      e.clear();
      mp.clear();
      pf("%d\n",ans);
   }
}
