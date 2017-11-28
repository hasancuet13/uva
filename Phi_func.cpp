#include<bits/stdc++.h>
#define SIZE_N 1000000
using namespace std;
bool status[SIZE_N];
int prime[SIZE_N];
///int phi[SIZE_N];
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
int phi (int n) {
  int ret = n;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      while (n % i == 0) {
        n /= i;
      }
      ret -= ret / i;
    }
  }
  // this case will happen if n is a prime number
  // in that case we won't find any prime that divides n
  // that's less or equal to sqrt(n)
  if (n > 1) ret -= ret / n;
  return ret;
}
int main()
{
    int n;
    sieve();
    cin>>n;
    int d=phi(n);
    cout<<d;
}
