/**"I am not an authorized coder"**/
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
#define all(v)          v.begin(), v.end()
#define PI              2*acos(0.0)
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
#define readI1(a)       scanf("%lld",&a)
#define readI2(a,b)     scanf("%lld %lld",&a,&b)
#define readI3(a,b,c)   scanf("%lld %lld %lld",&a,&b,&c)
#define readI4(a,b,c,d) scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define BOUNDARY(i, j)  ((i >= 0 && i < w) && (j >= 0 && j < h))
#define Mx 100009
#define sq(x) ((x)*(x))
#define sq_dist(a,b)    (sqrt(sq(a.x-b.x)+sq(a.y-b.y)));
using namespace std;

int main()
{
	ll s,n,seq[100000+5];
	while(readI2(n,s)==2)
	{
		for(ll i=0;i<n;i++)
		{
			readI1(seq[i]);
		}
		ll high=0,low=0,sum=0,ans=n+2;
		while(high<=n)
		{
			if(sum>=s){
				ans=min(ans,high-low);
			}
			if(sum>=s && low<high)
			{
				sum-=seq[low];
				//cout<<"lsum: "<<sum<<endl;
				low++;
			}
			else
			{
				sum+=seq[high];
				//cout<<"hsum: "<<sum<<endl;
				high++;
			}


		}
		if(ans==n+2) ans=0;

		printf("%lld\n",ans);
	}

}

























