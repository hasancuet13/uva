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
using namespace std;
int k=6;
int n[100];
int sol[100];
bool used[100];
void back_track(int N,int SZ)
{
    if(N==k)
    {
        sort(n,n+N);
        for(int i=0;i<k;i++)
            printf("%d ",sol[i]);
        printf("\n");
    }
    int lst=n[SZ];
    for(int i=0;i<SZ;i++)
    {
        if(!used[i]){
            if(lst!=n[i]){
            lst=n[i];
            used[i]=true;
            sol[N]=n[i];
            back_track(N+1,SZ);
            used[i]=false;
        }
    }
    }

}
int main()
{
    int N;
    while(cin>>N && N)
    {
        for(int i=0;i<N;i++)
        {
            cin>>n[i];
        }

        back_track(0,N);
    }
}
