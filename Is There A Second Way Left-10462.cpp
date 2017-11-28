#include<iostream>
#include<stdio.h>
#include<cstdio>
#include<string>
#include<cmath>
#include<cstring>
#include<ctype.h>
#include<ctime>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<stack>
#define read() freopen("C:/Users/MASUDUR RAHMAN/Desktop/input.txt","r",stdin)
#define write() freopen("outputm.txt","w",stdout)
#define mem(a, b) memset(a, b, sizeof(a))
#define lli long long
#define pii pair<int,int>
#define pff pair<double,double>
#define sc(n) scanf("%d",&n)
#define scc(a, b, w) scanf("%d %d %d",&a, &b, &w)
#define uu first
#define inf 1000000
#define vv second
#define sp <<' '
#define nwl <<endl
using namespace std;
int n, m, pr[103];
struct scnd
{
   int u, v, w;
   scnd(int a, int b, int c)
   {
      u=a; v=b; w=c;
   }
   bool operator<(const scnd&p)const{return w<p.w;}
};
vector <scnd> way;
vector <int> mway;
int rprsntv(int r)
{
   return pr[r]=(pr[r]==r)?r:rprsntv(pr[r]);
}
int scnd_way(int m, bool ok)
{
   int x=way.size(), cc=0, s=0;
   for(int i=1; i<=n; i++) pr[i]=i;
   //sort(way.begin(), way.end());
   for(int i=0; i<x; i++){
      if(i==m) continue;
      int u=rprsntv(way[i].u);
      int v=rprsntv(way[i].v);
      if(u!=v){
         pr[u]=v; ++cc;
         s+=way[i].w;
         if(ok) mway.push_back(i);
         //cout<<i<<' ';
      }
      if(cc==n-1) break;
   }
   //cout<<s<<endl;
   //cout<<n<<' '<<cc<<' '<<s<<endl;
   if(cc==n-1) return s;
   return -1;
}
int main()
{
   //read();
   int t, kase=0;
   cin>>t;
   while(t--){
      cin>>n>>m; way.clear();
      int a, b, w; mway.clear();
      for(int i=0; i<m; i++){
         scc(a, b, w);
         if(a!=b) way.push_back(scnd(a, b, w));
      }
      sort(way.begin(), way.end());
      printf("Case #%d : ", ++kase);
      if(scnd_way(-1, true)==-1){
         puts("No way"); continue;
      }
      int rslt=INFINITY, t, cm=INFINITY;
      for(int i=0; i<mway.size(); i++){
         t=scnd_way(mway[i], false);
         if(t==-1) continue;
         rslt=min(rslt, t);
      }
      if(rslt==cm) puts("No second way");
      else printf("%d\n", rslt);
   }
   return 0;
}
