#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a[5];
    map<int,int>mp;
    while(cin>>t){
        for(int i=0;i<5;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        cout<<mp[t]<<endl;
        mp.clear();
    }
}
