#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[81];
    while(cin>>n && n)
    {
        a[0]=a[1]=1;
        for(int i=2;i<81;i++){
            a[i]=a[i-1]+a[i-2];
        }
        cout<<a[n]<<endl;
    }
    return 0;
}

