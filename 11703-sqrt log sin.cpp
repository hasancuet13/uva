#include<bits/stdc++.h>
using namespace std;
long int k1,k2,k3;int ans[1000000];
int main()
{
    long x,i;
    ans[0]=1;
    for(i=1;i<1000001;i++){
        k1=(int)(i-sqrt(i));
        k2=(int)(log(i));
        k3=(int)(i*pow(sin(i),2));
        ans[i]=(ans[k1]+ans[k2]+ans[k3])%1000000;
    }
    while(cin>>x && x>=0){
        cout<<ans[x]<<endl;
    }
    return 0;
}
