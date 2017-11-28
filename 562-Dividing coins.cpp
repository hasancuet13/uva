#include<bits/stdc++.h>
using namespace std;
int dp[110][50050],weight[110],mx,n;
int func(int i,int w)
{
    if(i>=n) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int profit1=0,profit2=0;
    if(w+weight[i]<=mx){
        profit1=weight[i]+func(i+1,w+weight[i]);
    }
    profit2=func(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>weight[i];
            sum+=weight[i];
        }
        mx=sum/2;
        memset(dp,-1,sizeof(dp));
        n=2*func(0,0);
        sum=sum-n;
        cout<<sum<<endl;
    }
}

