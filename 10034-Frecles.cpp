#include <bits/stdc++.h>
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
#define read3(a,b,c) scanf("%d%d",&a,&b,&c)
#define readI1(a) scanf("%I64d",&a)
#define readI2(a,b) scanf("%I64d %I64d",&a,&b)
#define readI3(a,b,c,d) scanf("%I64d %I64d %I64d %I64d",&a,&b,&c,&d)
#define Max 100000
#define BOUNDARY(i, j) ((i >= 0 && i < w) && (j >= 0 && j < h))
using namespace std;
int parent[1000005],n;
struct edge
{
	double u,v;
	double cost;
}ara[1000005];
struct  cord
{
	double px,py;
}ara1[1000005];
bool cmp(edge a,edge b)
{
	return a.cost<b.cost;
}
void make_set()
{
    for (int i = 0; i < n; ++i)
		{
			parent[i]=i;
		}
}
int dis_set(int r)
{
	return (parent[r]==r)?r:dis_set(parent[r]);
}
int main()
{
	int t,cas=0,cnt;
	double n1,n2,sum;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%lf %lf",&ara1[i].px,&ara1[i].py);
		}
		make_set();
		int c=0;
		for (int i = 0; i < n-1; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				 n1=pow((ara1[i].px-ara1[j].px),2);
				 n2=pow((ara1[i].py-ara1[j].py),2);
				 ara[c].u=i;
				 ara[c].v=j;
				 ara[c].cost=sqrt(n1+n2);
				 c++;
			}
		}
		sort(ara,ara+c,cmp);
		cnt=0,sum=0.0;
		for (int i = 0; i < c; ++i)
		{
			int ux=dis_set(ara[i].u);
			int uy=dis_set(ara[i].v);
			if(ux!=uy){
				parent[ux]=uy;
				cnt++;
				sum+=ara[i].cost;
				if(cnt==n-1) break;
			}
		}
		if(cas++) printf("\n");
		printf("%.2lf\n",sum);

	}
	return 0;
}
