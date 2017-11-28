///I am not an authorized coder!
#include<bits/stdc++.h>
#define FOR(i, s, e)    for(ll i=s; i<e; i++)
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
#define Max 1000005
#define BOUNDARY(i, j)  ((i >= 0 && i < w) && (j >= 0 && j < h))
using namespace std;
int kdx[]={-1,-1,-1,0,0,1,1,1};
int kdy[]={-1,0,1,-1,1,-1,0,1};
int dx[]={0, 1, 0, -1};
int dy[]={-1, 0, 1, 0};
vector<ll>g[Max],cost[Max];
struct node
{
	ll u,w;
	node(ll a,ll b){
		u=a;
		w=b;
	}
	bool operator < (const node &p) const{return w>p.w;}
};
ll d[Max],par[Max];
ll DIJKSTRA(ll n)
{
	for(ll i=0;i<=n;i++){
		d[i]=100000000000;
	}
	mem(par,-1);
	priority_queue<node>Q;
	Q.push(node(1,0));
	d[1]=0;
	while(!Q.empty())
	{
		node top=Q.top();
		Q.pop();
		ll u=top.u;
		if(u==n) return d[n];
		for(ll i=0;i<g[u].size();i++){
			ll v=g[u][i];
			if(d[u]+cost[u][i]<d[v])
			{
				d[v]=d[u]+cost[u][i];
				par[v]=u;
				Q.push(node(v,d[v]));
			}
		}
	}
	return -1;
}
int main()
{
	ll n,e;
	while(cin>>n>>e)
	{
		for(ll i=0;i<e;i++){
			ll u,v,w;
			cin>>u>>v>>w;
			g[u].push_back(v);
			g[v].push_back(u);
			cost[u].push_back(w);
			cost[v].push_back(w);
		}
		ll ret=DIJKSTRA(n);
		if(ret==-1) printf("-1\n");
		else{
			ll u=n;
			vector<ll>out;
			while(u!=-1)
			{
				out.push_back(u);
				u=par[u];
			}
			reverse(out.begin(),out.end());
			for(ll i=0;i<out.size();i++)
			{
				cout<<out[i]<<' ';
			}
			puts("");
		}
	}
	return 0;
}
