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
int n,m,mini,cnt;
string src,dest;
int s,d;
map<string,string>parent;
struct edge{
    string u,v;
    int w;
    edge(string U,string V,int W){
        u=U;
        v=V;
        w=W;
    }
};
vector<edge>e;
bool cmp(edge a,edge b)
{
    return a.w>b.w;
}
string find(string r)
{
    return parent[r]=(parent[r]==r)?r:find(parent[r]);
}
int mst(void)
{
    sort(e.begin(),e.end(),cmp);
    mini=10000000;
    for(int i=0;i<e.size();i++){
        string x=find(e[i].u);
        string y=find(e[i].v);
        if(x!=y)
        {
            parent[x]=y;
            if(mini>e[i].w){
              mini=e[i].w;
            }
        }
        if(find(src)==find(dest)) break;
    }
    return mini;
}
int main()
{
    //open(); show();
   int t,w,cas=0,idx,cas1=1;
   string s1,s2;
   while(read2(n,m)==2 && n && m){
      idx=0;
      for(int i=0;i<m;i++){
        cin>>s1>>s2;
        read(w);
        parent[s1]=s1; parent[s2]=s2;
        e.push_back(edge(s1,s2,w));
      }
      cin>>src>>dest;
      int ans=mst();
    printf("Scenario #%d\n%d tons\n\n",cas1++,ans);
    e.clear();
    parent.clear();
   }
}
