#include<bits/stdc++.h>
using namespace std;
int dp[70][70];
int nCr(int n,int r)
{
    if(r==1) return n;
    if(n==r) return 1;
    if(dp[n][r]!=-1) return dp[n][r];
    else{
        dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
        return dp[n][r];
    }
}
int main()
{
    int n,r;
    while(cin>>n>>r){
        memset(dp,-1,sizeof(dp));
        cout<<nCr(n,r)<<endl;

    }
}
