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
using namespace std;
struct point{
    double x,y;
    point(double ix=0, double iy=0) { x=ix, y = iy; }
        bool operator <(const point &p) const {
                return x < p.x || (x == p.x && y < p.y);
        }
};
inline double sq_dist(point a,point b)
{
    return (sqrt(sq(a.x-b.x)+sq(a.y-b.y)));
}
inline double cross(point &o,point &a,point &b)
{
    return (a.x-o.x)*(b.y-o.y)-(a.y-o.y)*(b.x-o.x);
}
vector<point> convexHull(vector<point>P)
{
    int n=P.size(),k=0;
    vector<point>C(2*n);
    sort(P.begin(),P.end());
    for(int i=0;i<n;i++)
    {
        while(k>=2 && cross(C[k-2],C[k-1],P[i])<=0)
            k--;
        C[k++]=P[i];
    }
    for(int i=n-2,t=k+1;i>=0;i--)
    {
        while(k>=t && cross(C[k-2],C[k-1],P[i])<=0)
            k--;
        C[k++]=P[i];
    }
    C.resize(k);
    return C;
}
int main()
{
    int np,nc,t=0,cs=1;
    vector<point>xy,hullpoints;
    while(read(np)==1 && np)
    {
        if(t) puts("");t=1;
        double x,y;
        xy.clear();hullpoints.clear();
        for(int i=0;i<np;i++)
        {
            scanf("%lf%lf",&x,&y);
            xy.push_back(point(x,y));
        }
        hullpoints=convexHull(xy);
        int sz=hullpoints.size();
        printf("Region #%d:\n",cs++);
        for(int i=sz-1;i>=0;i--)
         {
            if(i!=sz-1) printf("-");
            printf("(%.1lf,%.1lf)",hullpoints[i].x,hullpoints[i].y);
         }
         double peri = 0;
         for(int i=0;i<sz-1;i++)
            peri+=sq_dist(hullpoints[i],hullpoints[i+1]) ;
         printf("\nPerimeter length = %.2lf\n",peri);

    }
}
