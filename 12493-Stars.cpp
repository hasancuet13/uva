#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;
int main()
{
    ull n;
    while(cin>>n){
            ull ret=n;
        for(ull i=2;i*i<=n;i++){
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                }
                ret-=ret/i;
            }
        }
    if(n>1) ret-=ret/n;
    cout<<ret/2<<endl;
    }
}
