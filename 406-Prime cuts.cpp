#include<bits/stdc++.h>
#define SIZE 1000
using namespace std;
int prime[SIZE];
bool status[SIZE];
int sieve(int SIZE_N)
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
    for(int i=1;i<=SIZE_N;i++){
        if(!status[i]){
            prime[t++]=i;
        }
    }
    return t;
}

int main()
{
    int n,c,mid,strt,fns;
    while(cin>>n>>c)
    {
        int t=sieve(n);
        if(t%2==0){
            mid=t/2;
            if((n==c)||(mid-(c*2)/2)<0){
                cout<<n<<" "<<c<<": ";
                for(int i=0;i<t;i++){
                    cout<<prime[i];
                    if(i!=t-1) cout<<" ";
                }
            }
            else{
                strt=mid-((c*2)/2-1)-1;
                fns=mid+((c*2)/2);
                cout<<n<<" "<<c<<": ";
                for(int i=strt;i<fns;i++){
                    cout<<prime[i];
                    if(i!=fns-1) cout<<" ";
                }
            }
            cout<<"\n\n";
        }
        else{
            mid=t/2+1;
            if((n==c)||(mid-(c*2-1)/2)<=0){
                cout<<n<<" "<<c<<": ";
                for(int i=0;i<t;i++){
                    cout<<prime[i];
                    if(i!=t-1) cout<<" ";
                }
            }
            else{
                strt=mid-((c*2-1)/2)-1;
                fns=mid+((c*2-1)/2);
                cout<<n<<" "<<c<<": ";
                for(int i=strt;i<fns;i++){
                    cout<<prime[i];
                    if(i!=fns-1) cout<<" ";
                }
            }
            cout<<"\n\n";
        }

    }
}
