#include<bits/stdc++.h>
using namespace std;
bool status[1000000];
vector<int>prime;
void sieve()
{
    int N=1000000,t=0;
    for(int i=4;i*i<=N;i+=2){
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
            prime.push_back(i);
    }
}
int divisor(int n)
{
    int sq=sqrt(n)+1;
    int div=1;
    for(int i=0;i<prime.size();i++){
        if(n%prime[i]==0){
            int cnt=1;
            while((n%prime[i])==0){
                n/=prime[i];
                cnt++;
            }
            div*=cnt;
        }
    }
    return div;
}
int main()
{
    sieve();
    int n,d;
    cin>>n;
    d=divisor(n);
    cout<<d;
}
