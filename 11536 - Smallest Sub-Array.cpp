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

int aran[1000001+5];
int freq[105];
bool ckr(int K)
{
	for(int i=1;i<=K;i++){
		if(freq[i]<=0)
		return false;
	}
	return true;
}
int main()
{
	aran[0]=1;aran[1]=2;aran[2]=3;
    int T,ca=1;
    int N,M,K;
	read(T);
	while(T--)
	{
		read3(N,M,K);
		for(int i=3;i<N;i++)
		{
			aran[i]=(aran[i-1]+aran[i-2]+aran[i-3])%M+1;
		}
		mem(freq,0);

		int hi=0,lo=0,Min=N+5;
		freq[aran[hi]]++;
		while(true)
		{
			  if(ckr(K))
			  {
				if((hi-lo+1)<Min)
					Min=hi-lo+1;
				if(aran[lo]<=K)
				{
					freq[aran[lo]]--;
				}
				lo++;
			  }
			  else
			  {
				hi++;
				if(hi<N){
					if(aran[hi]<=K)
						freq[aran[hi]]++;
				}
				else break;
			  }

		}
		if(Min==N+5)
		  printf("Case %d: sequence nai\n",ca++);
		else
			printf("Case %d: %d\n",ca++,Min);
	}
}





















