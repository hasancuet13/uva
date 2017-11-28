#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned n,r;
    while(cin>>n && n){
        r=sqrt(n);
        if(r*r==n) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
