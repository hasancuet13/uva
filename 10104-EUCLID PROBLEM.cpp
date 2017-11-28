#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll EX_UC(ll a,ll b,ll &x,ll &y)
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
int main()
{
    ll a,b,x,y,d;
    while(cin>>a>>b){
        d=EX_UC(a,b,x,y);
        if(a==b){
            x=0;
            y=1;
        }
        cout<<x<<" "<<y<<" "<<d<<endl;
    }
    return 0;
}
