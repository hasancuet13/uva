#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double m1,n1,m2,n2,m3,n3,a,s,r;
        cin>>r>>m1>>n1>>m2>>n2>>m3>>n3;
        s=(m1+n1+m2+n2+m3+n3)/2;
        a=sqrt(s*(s-(m1+n1))*(s-(m2+n2))*(s-(m3+n3)));
        cout<<a;
    }
}
