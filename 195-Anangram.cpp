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
char s[1000];
char sol[1000];
bool used[100];
bool cmp(char a, char b)
{
        int delta = tolower(a) - tolower(b);
        return delta ? delta < 0 : a <b;
}
void back_track(int n,int sz)
{
    if(n==sz)
    {
        for(int i=0;i<sz;i++)
        {
            printf("%c",sol[i]);
        }

        printf("\n");
    }
    char lst_ltr='\0';
    for(int i=0;i<sz;i++)
    {
        if(!used[i])
        {
            if(s[i]!=lst_ltr)
            {
                used[i]=true;
                lst_ltr=s[i];
                sol[n]=s[i];
                back_track(n+1,sz);
                used[i]=false;
            }
        }
    }
}

int main()
{
    int t;
    read(t);
    while(t--)
    {
        scanf("%s",s);
        int sz=strlen(s);
        sort(s,s+sz,cmp);
        mem(used,0);
        back_track(0,sz);
    }
    return 0;
}
