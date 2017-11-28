#include<bits/stdc++.h>
#define ll long long
using namespace std;
/**ll EX_UC(ll a,ll b,ll &x,ll &y)
{
    ll x1,y1;
    //if(a<b) return EX_UC(b,a,y,x);
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    ll d=EX_UC(b,a%b,y1,x1);
    x=x1;
    y=y1-(a/b)*x1;
    return d;
}
**/
//Another version of EX_UC
void EX_UC(ll a,ll b,ll &d,ll &x,ll &y)
{
    if(!b) { x=1; y=0;  d=a;}
    else   { EX_UC(b,a%b,d,y, x); y=y-x*(a/b); }
}
int main()
{
    ll p,q,f,c,T,g,x,k;
    cin>>T;
    while(T--)
    {
        cin>>x>>k;
        f=floor(1.*x/k);
        c=ceil(1.*x/k);
        EX_UC(f,c,g,p,q);
        p*=x/g;
        q*=x/g;
        cout<<p<<" "<<q<<endl;
    }
}
