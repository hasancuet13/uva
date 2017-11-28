#include<bits/stdc++.h>
#define ll long long
using namespace std;
int sign_(ll a,ll b)
{
    if(a<0 && b>0) return -1;
    if(a>0 && b<0) return -1;
    return 1;
}

ll Floor(ll a,ll b)
{
    ll F=a/b + (!(a%b == 0))*(sign_(a,b) < 0?-1:0);
    return F;
}

ll Ceil(ll a,ll b)
{
    ll C=a/b + (!(a%b == 0))*(sign_(a,b) < 0?0:1);
    return C;
}
ll EX_UC(ll a,ll b,ll &X,ll &Y)
{
    if(b==0)
    {
        X=1;
        Y=0;
        return a;
    }
    ll x=-(a/b),PX,r;
    r=EX_UC(b,a%b,X,Y);
    PX=X;
    X=Y;
    Y=(Y*x)+(PX);
    return r;
    /*ll x1,y1;
    if(b==0){
       x=1;
       y=0;
       return a;
    }
    ll d=EX_UC(b,a%b,y1,x1);
    x=x1;
    y=y1-(a/b)*x1;
    return d;
    */
}
ll all_solution(ll a,ll b,ll c,ll mina,ll maxa,ll minb,ll maxb)
{
    ll x0,y0,x1,y1,x,y;
    ll g=EX_UC(a,b,x0,y0);
    if(g && c%g) return 0;
    if(a==0 && b==0)
    {
        if(c==0) return (maxa-mina+1)*(maxb-minb+1);
        return 0;
    }
    else if(a==0)
    {
        if(c/b>=minb&&c/b<=maxb) return (maxa-mina+1);
        return 0;
    }
    else if(b==0)
    {
        if(c/a>=mina&&c/a<=maxa) return (maxb-minb+1);
        return 0;
    }
    x1=(c/g)*x0;
    y1=(c/g)*y0;
    ll minT1,maxT1,minT2,maxT2,minT,maxT,a1,b1;
    a1=b/g;
    b1=a/g;
    minT1=Ceil(mina-x1,a1);
    maxT1=Floor(y1-minb,b1);
    minT2=Ceil(y1-maxb,b1);
    maxT2=Floor(maxa-x1,a1);
    minT=max(minT1,minT2);
    maxT=min(maxT1,maxT2);
    return max(maxT-minT+1,0ll);
}
int main()
{
    ll T,A,B,C,x1,x2,y1,y2,cas=1,soln,tmp;
    cin>>T;
    while(T--){
        cin>>A>>B>>C>>x1>>x2>>y1>>y2;
        C=-C;
        if(A<0)
        {
            A=-A;
            tmp=x1;
            x1=-x2;
            x2=-tmp;
        }
        if(B<0)
        {
            B=-B;
            tmp=y1;
            y1=-y2;
            y2=-tmp;
        }
        printf("Case %lld: %lld\n",cas++,all_solution(A,B,C,x1,x2,y1,y2));
    }
    return 0;
}
