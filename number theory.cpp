#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,m,i;
    while(cin>>n){
        for(i=1;i<=n;i++){
            if(__gcd(i,n)!=1 && __gcd(i,n)!=i){
                cout<<i<<endl;
            }
        }
    }
}
