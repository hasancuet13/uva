#include<bits/stdc++.h>
using namespace std;
int reserve[30];
int main()
{
    int b,n,d,c,v;
    while(cin>>b>>n && b && n)
    {
        for(int i=1;i<=b;i++){
            cin>>reserve[i];
        }
        for(int i=0;i<n;i++){
            cin>>d>>c>>v;
            reserve[d]-=v;
            reserve[c]+=v;
        }
        bool bail=true;
        for(int i=1;i<=b;i++){
            if(reserve[i]<0){
                bail=false;
                break;
            }
        }
        if(bail) cout<<"S\n";
        else cout<<"N\n";
    }
}
