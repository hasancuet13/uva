#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool status[10000005];
int c[10000005]={};
int main()
{
    int anagramic[] = {2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, 97, 113, 131, 199, 311, 337, 373, 733, 919, 991};
    int Size=22,n;
    while(cin>>n && n){
        int best=Size;
        for(int i=Size-1;i>=0 && anagramic[i]>n;--i,--best);
        if(best<Size)
        {
            int Max=1;
            while(n){
                n/=10;
                Max*=10;
            }
            if(anagramic[best]<Max){
                cout<<anagramic[best]<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
        else{
            cout<<0<<endl;
        }
    }
}
