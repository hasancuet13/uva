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
int n,price[10000+5],m,i,j;
int main()
{
    int cas=1;
    while(read(n)==1)
    {
        for(i=0;i<n;i++){
            read(price[i]);
        }
        read(m);
        sort(price,price+n);
        int diff=INT_MAX,book1,book2;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(price[i]+price[j]==m && price[j]-price[i]<diff){
                    book1=price[i];
                    book2=price[j];
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n",book1,book2);
        if(cas++) puts("");
    }
}





















