#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll bigmod(ll a,ll r)
{
    ll x;
    if(r==1)
        return a;
    ll p=bigmod(a,r/2);
    if(r%2==0){
        x=p*p;
        return x;
    }
    else{
        x=a*p*p;
        return x;
    }
}
int main()
{
    ll t,l,n,m,r,temp;
    char a[100];
    cin>>t;
    while(t--){
        cin>>a;
        l=strlen(a);
        n=atoi(a);
        m=n;
        ll sum=0;
        while(n!=0)
        {
            r=n%10;
            temp=bigmod(r,l);
            sum+=temp;
            n/=10;
        }
        if(m==sum)cout<<"Armstrong\n";
        else cout<<"Not Armstrong\n";
    }
    return 0;
}
