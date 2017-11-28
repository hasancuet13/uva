#include<bits/stdc++.h>
using namespace std;
map<string,int>T;
int main()
{
    int n;string s;
    while(cin>>n>>s)
    {
        int maxx=0,v;
        int maxv=0;
        for(int i=0;i<s.size();i++){
            v=T[s.substr(i,n)]++;
            if(v>maxv){
                maxv=v;
                maxx=i;
            }
        }
        cout<<s.substr(maxx,n)<<endl;
    }
}
