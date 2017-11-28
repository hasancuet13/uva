#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1[17];
    int n;
    while(cin>>n){
        string s[n+1];
        s1[1]="Happy";
        s1[2]="birthday";
        s1[3]="to";
        s1[4]="you";
        s1[5]="Happy";
        s1[6]="birthday";
        s1[7]="to";
        s1[8]="you";
        s1[9]="Happy";
        s1[10]="birthday";
        s1[11]="to";
        s1[12]="Rujia";
        s1[13]="Happy";
        s1[14]="birthday";
        s1[15]="to";
        s1[16]="you";
        for(int i=1;i<=n;i++){
            cin>>s[i];
        }
        int m=((n/16)+1)*16;
        int j=1,k=1;
        for(int i=1;i<=m;i++){
            cout<<s[k]<<": "<<s1[j]<<endl;
            k++;j++;
            if(j>16){
                j=1;
            }
            if(k>n){
                k=1;
            }
        }
    }
}
