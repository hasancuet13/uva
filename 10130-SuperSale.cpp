#include<bits/stdc++.h>
using namespace std;
int dp[1005][35];
int n,p[1005],weight[1005],mw,g;
int sale(int i,int w)
{

    if(i==n) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    int profit1=0,profit2=0;
    if(w+weight[i]<=mw){
        profit1=p[i]+sale(i+1,w+weight[i]);
    }
    profit2=sale(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>p[i]>>weight[i];
        }
        cin>>g;
        int c=0;
        for(int i=0;i<g;i++){
            cin>>mw;
            memset(dp,-1,sizeof(dp));
            c+=sale(0,0);
        }
        cout<<c<<endl;
    }
}
