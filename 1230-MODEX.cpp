#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll bigmod(ll a,ll b,ll m)
{
    if(b==0) return 1;
    ll x=bigmod(a,b/2,m);
    if(b%2==0){
        x=(x*x)%m;
    }
    else{
        x=(a*x*x)%m;
    }
    return x;
}
int main()
{
    ll b,p,m,t,r;
    while(cin>>t && t!=0){
    while(t--){
        cin>>b>>p>>m;
        ll r=bigmod(b,p,m);
        cout<<r<<endl;
    }
    }
}

