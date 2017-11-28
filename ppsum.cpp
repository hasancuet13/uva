#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int d=(n*(n+1))/2;
    return d;
}
int main()
{
    int n,d,t,m;
    cin>>t;
    while(t--)
    {
        cin>>d>>n;
        for(int i=1;i<=d;i++){
            m=n;
            n=sum(m);
        }
        cout<<n<<endl;
    }
}
