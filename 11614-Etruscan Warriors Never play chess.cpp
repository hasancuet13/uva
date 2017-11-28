#include<bits/stdc++.h>
using namespace std;
int main()
{
    long s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout<<(long)((-1+sqrt(1+8*s))/2.0)<<endl;
    }
}
