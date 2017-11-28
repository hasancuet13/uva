#include<bits/stdc++.h>
#define ll long double
#define siz INT_MAX
using namespace std;
ll fact(ll n)
{
    ll r=1;
    for(ll i=2;i<=n;i++){
        r*=i;
    }
    return r;
}
int main()
{
    ll n,m,r;
    while(cin>>n>>m && n!=0 && m!=0){
    r=(fact(n))/(fact(n-m)*fact(m));
    cout<<n<<" things taken "<<m<<" at a time is "<<fixed<<setprecision(0)<<r<<" exactly.\n";
    }

}

