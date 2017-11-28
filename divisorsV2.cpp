#include<bits/stdc++.h>
#define SIZE_N 1000000
using namespace std;
bool status[1000000];
int prime[SIZE_N];
void sieve()
{
    int N=1000000,t=0;
    for(int i=4;i<=N;i+=2){
        status[i]=1;
    }
    for(int i=3;i*i<=N;i+=2){
        if(!status[i]){
            for(int j=i*i;j<=N;j+=i){
                status[j]=1;
            }
        }
    }
    status[1]=1;
    for(int i=2;i<=N;i++){
        if(!status[i])
            prime[t++]=i;
    }
}
int divisor(int n)
{
    int div=1;
    int sq=sqrt(n)+1;
    for(int i=0;i<=sq;i++){
        if(n%prime[i]==0){
            int cnt=1;
            while((n%prime[i])==0){
                n/=prime[i];
                cnt++;
            }
            div*=cnt;
        }
    }
    if(n>1)div=div*2;
    return div;
}
int main()
{
    sieve();
    int n,d;
    while((cin>>n)){
        d=divisor(n);
        cout<<d<<endl;
    }
}

