#include<bits/stdc++.h>
#define ll long long
#define siz 1000006
using namespace std;
ll m=1000003,fact[siz],mult_inv[siz];
ll bigmod(ll a,ll b)
{
    if(b==0) return 1;
    ll x=bigmod(a,b/2);
    if(b%2==0){
        x=(x*x)%m;
    }
    else{
        x=(a*x*x)%m;
    }
    return x;
}
/**
int modularInverse(int a, int n) {
    int x, y, r;
    extendedEuclid(a, n, x, y);
    r = x % n;
    return r < 0? r + n : r;
}
*/
int main()
{
    int T,n,k,ans;
    fact[0]=mult_inv[0]=1;
    for(int i=1;i<=siz-5;i++){
        fact[i]=(fact[i-1]*i)%m;
        mult_inv[i]=(mult_inv[i-1]*bigmod(i,m-2))%m;
    }
    int cas=1;
    cin>>T;
    while(T--)
    {
        cin>>n>>k;
        ans=fact[n];
        ans=(ans*mult_inv[k])%m;
        ans=(ans*mult_inv[n-k])%m;
        printf("Case %d: %d\n",cas++,ans);
    }
    return 0;
}
