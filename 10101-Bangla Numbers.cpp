#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cas=0;
    long long int n;
    while(scanf("%lld",&n)==1){
        printf("%4d.",++cas);
        if(n==0) {
            puts(" 0");
            continue;
        }
        if(n/100000000000000!=0){
            printf(" %lld kuti",n/100000000000000);
            n=n%100000000000000;
            if(n<10000000){
                printf(" kuti");
            }
        }
        if(n/1000000000000!=0){
            printf(" %lld lakh",n/1000000000000);
            n=n%1000000000000;
            if(n<10000000){
                printf(" kuti");
            }
        }
        if(n/10000000000!=0){
            printf(" %lld hajar",n/10000000000);
            n=n%10000000000;
            if(n<10000000){
                printf(" kuti");
            }
        }
        if(n/1000000000!=0){
            printf(" %lld shata",n/1000000000);
            n=n%1000000000;
            if(n<10000000){
                printf(" kuti");
            }
        }
        if(n/10000000!=0){
            printf(" %lld kuti",n/10000000);
            n=n%10000000;
        }
        if(n/100000!=0){
            printf(" %lld lakh",n/100000);
            n=n%100000;
        }
        if(n/1000!=0){
            printf(" %lld hajar",n/1000);
            n=n%1000;
        }
        if(n/100!=0){
            printf(" %lld shata",n/100);
            n=n%100;
        }
        if(n!=0){
            printf(" %lld",n);
        }
        printf("\n");
    }
}
