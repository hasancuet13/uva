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
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

bool leapyear(int y)
{
    return (y%4==0 && y%100!=0)||(y%400==0);
}
int main()
{
    int t;
    read(t);
    for(int cs=1;cs<=t;cs++)
    {
        map<string,int>mp;
        mp["January"]=1;
        mp["February"]=2;
        mp["March"]=3;
        mp["April"]=4;
        mp["May"]=5;
        mp["June"]=6;
        mp["July"]=7;
        mp["August"]=8;
        mp["September"]=9;
        mp["October"]=10;
        mp["November"]=11;
        mp["December"]=12;

        int yr,dt;
        read(yr);
        string s;
        cin.ignore();
        getline(cin,s,'-');
        read(dt);
        int k;
        read(k);
        int mm=mp[s];
        bool done=false;
        for(int yy=yr;;yy++)
        {
            for(int i=mm;i<=12;i++)
            {
                int l=days[i-1];
                if(i==2 && leapyear(yy))
                    l++;
                for(int j=dt+1;j<=l;j++)
                {
                    k--;
                    if(k==0){
                        done=true;
                        cout<<"Case "<<cs<<": "<<yy<<"-"<<months[i-1]<<"-";
                        printf("%.2d\n",j);
                    }
                }
                if(done)
                    break;
                dt=0;
            }
            if(done)
                break;
            mm=1;
        }

    }
}
