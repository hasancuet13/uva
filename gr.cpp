#include<bits/stdc++.h>
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
#define read3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define readI1(a) scanf("%I64d",&a)
#define readI2(a,b) scanf("%I64d %I64d",&a,&b)
#define readI3(a,b,c,d) scanf("%I64d %I64d %I64d %I64d",&a,&b,&c,&d)
#define Max 100000
#define BOUNDARY(i, j) ((i >= 0 && i < w) && (j >= 0 && j < h))
using namespace std;
int siz=200005;
int arra[siz];
char str[siz];
int main()
{
    int t,cnt=0;
    read(t);
    while(t--)
    {
        sf("%s",str+1);
        str[0]='0';
        int len=strlen(str);
        for(int i=1;i<len;i++){
            sf("%d",&arra[i]);
        }
        int ans=0;
        str[len]='0';
        for(int i=0;i<len;i++){

        }
    }
}


















