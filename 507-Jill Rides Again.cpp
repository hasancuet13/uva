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
#define readI1(a)       scanf("%lld",&a)
#define readI2(a,b)     scanf("%lld %lld",&a,&b)
#define readI3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define Max 1000005
#define BOUNDARY(i, j)  ((i >= 0 && i < w) && (j >= 0 && j < h))
using namespace std;

int main()
{
	int tc,kk=1,n,m,arr[20005];
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int tmp=0,mx=0,st=1,stf=1,edf=-1;

        for(int i=1;i<n;i++)
        {
            read(arr[i]);
            tmp+=arr[i];
            if(tmp<0) tmp=0,st=i+1;
            if(tmp>mx || (tmp==mx && i-st>edf-stf)) mx=tmp, edf=i,stf=st;
        }

        if(!mx) cout<<"Route "<<kk++<<" has no nice parts"<<endl;
        else    cout<<"The nicest part of route "<<kk++<<" is between stops "<<stf<<" and "<<edf+1<<endl;
    }
    return 0;
}
