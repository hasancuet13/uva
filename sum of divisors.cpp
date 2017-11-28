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
    int sq=sqrt(n)+1;
    for(int i=0;prime[i]<sq;i++){
        if(n%prime[i]==0){
            int cnt=1;
            while((n%prime[i])==0){
                n/=prime[i];
                cnt++;
            }
            s_d*=(pow(prime[i],cnt)-1)/(prime[i]-1);
            div*=cnt;
        }
    }
    if(n>1){
        int p=n*n;
        s_d*=(p-1)/(n-1);
    }
    return s_d;
}


int main()
{
    int n,d;
    sieve();
    while(cin>>n){
        d=sum_div(n);
    cout<<d<<endl;
    }
}

