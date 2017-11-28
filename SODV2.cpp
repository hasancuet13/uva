#include<bits/stdc++.h>
#define SIZE_N 1000000
using namespace std;
bool status[SIZE_N];
int prime[SIZE_N];
void sieve()
{
    int t=0;
    for(int i=4;i<=SIZE_N;i+=2){
        status[i]=1;
    }
    for(int i=3;i*i<=SIZE_N;i+=2){
        if(!status[i]){
            for(int j=i*i;j<=SIZE_N;j+=i){
                status[j]=1;
            }
        }
    }
    status[1]=1;
    for(int i=2;i<=SIZE_N;i++){
        if(!status[i]){
            prime[t++]=i;
        }
    }
}
int sum_div(int n)
{
    int s_d=1,div=1;
    for(int i=0;i<10000;i++){
        if(n%prime[i]==0){
            int cnt=1;
            while((n%prime[i])==0){
                n/=prime[i];
                cnt++;
            }
           // s_d*=(pow(prime[i],cnt)-1)/(prime[i]-1);
            div*=cnt;
        }
    }
    return div;
}
int main()
{
    int n,d;
    while(cin>>n)
        d=sum_div(n);
    cout<<d<<endl;
}


