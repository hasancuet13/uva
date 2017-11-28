#include<bits/stdc++.h>
using namespace std;
map<string,int>T;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        T[s]++;
        getline(cin,s);
    }
    for(map<string,int>::const_iterator it=T.begin();it!=T.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
