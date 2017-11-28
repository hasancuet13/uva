#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int i,j,l,k,s1,s2,s3,n;
    while(cin>>n && n){
        double a[1024],pi=acos(-1);
        for(i=0;i<n;i++){
            cin>>s1>>s2>>s3;
            a[i]=atan2(s2-s1,s3-s1);
        }
        sort(a,a+n);
        double gap=0;
        for(i=1;i<n;i++){
            gap=max(gap,a[i]-a[i-1]);
        }
        gap=max(gap,2*pi-(a[n-1]-a[0]));
        if(gap>pi) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;
}
