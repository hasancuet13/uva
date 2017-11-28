#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,sub;
    string s;
    while(cin>>n>>p>>q>>s){
        int c=0,sub,p1=n,q;
            while(true){
                n=n-p;
                c++;
                if(n%q==0) break;
            }
            sub=p1-n;
            q=sub/c;
            for(int i=0;i<p1;i++){
                if(i%q==0) cout<<endl;
                cout<<s[i];
            }
    }
}
