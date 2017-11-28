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
#define readI1(a)       scanf("%I64d",&a)
#define readI2(a,b)     scanf("%I64d %I64d",&a,&b)
#define readI3(a,b,c,d) scanf("%I64d %I64d %I64d %I64d",&a,&b,&c,&d)
#define MX              1000008
#define prec_error      10e-9
#define BOUNDARY(i, j)  ((i >= 0 && i < w) && (j >= 0 && j < h))
using namespace std;
int kdx[]={-1,-1,-1,0,0,1,1,1};
int kdy[]={-1,0,1,-1,1,-1,0,1};
int dx[]={0, 1, 0, -1};
int dy[]={-1, 0, 1, 0};
int street[500005];
int avenue[500005];
int main()
{
	int tc,cas=1;
	scanf("%d",&tc);
	while(tc--)
	{

		int s,a,f;
		scanf("%d %d %d",&s,&a,&f);
		for (int i = 0; i < f; ++i)
		{
			scanf("%d %d",&street[i],&avenue[i]);
		}
		sort(street,street+f);
		sort(avenue,avenue+f);
		if(f%2) printf("(Street: %d, Avenue: %d)\n",street[f/2],avenue[f/2]);
		else printf("(Street: %d, Avenue: %d)\n",street[(f-1)/2],avenue[(f-1)/2]);
	}
	return 0;
}
