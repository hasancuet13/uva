#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l;
    int a[1001],b[1001];
    cin>>t;
    getchar();
    char ch='"';
    while(t--)
    {
        cin>>l;
        for(int i=0;i<l;i++){
            cin>>a[i];
        }
        for(int i=0;i<l;i++){
            cin>>b[i];
        }
        for(int i=0;i<l;i++)
        {
            if(a[i]==0){
                if(b[i]==1)
                cout<<" ";
            }
            if(a[i]==1){
                if(b[i]==1) cout<<".";
                else if(b[i]==2) cout<<",";
                else if(b[i]==3) cout<<"?";
                else printf("%c",ch);
            }
            if(a[i]==2){
                if(b[i]==1) cout<<"a";
                if(b[i]==2) cout<<"b";
                if(b[i]==3) cout<<"c";
            }
            if(a[i]==3){
                if(b[i]==1) cout<<"d";
                if(b[i]==2) cout<<"e";
                if(b[i]==3) cout<<"f";
            }
            if(a[i]==4){
                if(b[i]==1) cout<<"g";
                if(b[i]==2) cout<<"h";
                if(b[i]==3) cout<<"i";
            }
            if(a[i]==5){
                if(b[i]==1) cout<<"j";
                if(b[i]==2) cout<<"k";
                if(b[i]==3) cout<<"l";
            }
            if(a[i]==6){
                if(b[i]==1) cout<<"m";
                if(b[i]==2) cout<<"n";
                if(b[i]==3) cout<<"o";
            }
            if(a[i]==7){
                if(b[i]==1) cout<<"p";
                if(b[i]==2) cout<<"q";
                if(b[i]==3) cout<<"r";
                if(b[i]==4) cout<<"s";
            }
            if(a[i]==8){
                if(b[i]==1) cout<<"t";
                if(b[i]==2) cout<<"u";
                if(b[i]==3) cout<<"v";
            }
            if(a[i]==9){
                if(b[i]==1) cout<<"w";
                if(b[i]==2) cout<<"x";
                if(b[i]==3) cout<<"y";
                if(b[i]==4) cout<<"z";
            }
        }
        cout<<endl;
    }
}
