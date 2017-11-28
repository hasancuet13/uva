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
#define Mx 2147483647
#define sq(x) ((x)*(x))
using namespace std;
ll n,m,d;
ll a[16],f[16];
struct matrix
{
    long v[16][16];
    long row,col;
};
matrix multiply(matrix a,matrix b)
{
    assert(a.row==b.col);
    matrix r;
    r.row=d;
    r.col=d;
    for(int i=0;i<r.row;i++)
    {
        for(int j=0;j<r.col;j++)
        {
            ll sum=0;
            for(int k=0;k<a.col;k++)
            {
                sum+=(a.v[i][k]%m)*(b.v[k][j]%m);
                sum%=m;
            }
            r.v[i][j]=sum;
        }
    }
    return r;
}
matrix power(matrix mat,ll p)
{
    if(p==1) return mat;
    if(p%2==1)
        return multiply(mat,power(mat,p-1));
    matrix ret=power(mat,p/2);
    ret=multiply(ret,ret);
    return ret;
}
int main()
{
    while(readI3(d,n,m)==3 && d && n && m)
    {
        matrix mat;
        mat.row=d;
        mat.col=d;
        memset(mat.v,0,sizeof mat.v);
        for(int i=0;i<d;i++)
            readI1(mat.v[0][i]);
        for(int i=1,j=0;i<d;i++,j++){
            mat.v[i][j]=1;
        }
        for(int i=d-1;i>=0;i--)
            readI1(f[i]);
        int ans;
        if(n>d){
            matrix ret=power(mat,n-d);
            ans=0;
            for(int i=0;i<d;i++){
                ans+=((ret.v[0][i]%m)*(f[i]%m))%m;
            }
        }
        else {
            ans=f[d-n]%m;
        }
        cout<<ans<<endl;
    }
}
