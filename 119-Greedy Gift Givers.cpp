#include<bits/stdc++.h>
using namespace std;
map<string,int>M;
vector<string>v;
int main()
{
    int n,a,m,t=0;
    string s,s1,s2;
    while(cin>>n){
        M.clear();v.clear();
        if(t++) cout<<endl;
        for(int i=0;i<n;i++){
            cin>>s;
            v.push_back(s);
        }
        for(int i=0;i<n;i++){
            cin>>s2>>a>>m;
            if(!m) continue;
            a/=m;
            for(int j=0;j<m;j++){
                cin>>s1;
                M[s1]+=a;
                M[s2]-=a;
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" "<<M[v[i]]<<endl;
        }
    }
    return 0;
}
