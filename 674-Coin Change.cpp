#include<bits/stdc++.h>
using namespace std;
int dp[6][8000];
int make;
int coin[]={50,25,10,5,1};
int coin_cng(int i,int amount)
{
    if(i>=5){
        if(amount==0) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    int ret1=0,ret2=0;
    if(amount-coin[i]>=0){
        ret1=coin_cng(i,amount-coin[i]);
    }
    ret2=coin_cng(i+1,amount);
    dp[i][amount]=ret1+ret2;
    return dp[i][amount];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    while(cin>>make)
    {
        cout<<coin_cng(0,make)<<endl;
    }
    return 0;
}
