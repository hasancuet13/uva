#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll bigmod(ll a,ll b,ll m){
    if(b==0) return 1;
    ll x=bigmod(a,b/2,m);
    if(b%2==0) x=(x*x)%m;
    else x=(a*x*x)%m;
    return x;

}
int main()
{
    ll a,b,m=100;
    while(cin>>a>>b)
    {
        ll year=bigmod(a,b,m);
        if(year<10) cout<<"0"<<year<<endl;
        else
        cout<<year<<endl;
    }
    return 0;
}
