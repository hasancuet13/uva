#include<bits/stdc++.h>
#define tr(container,it) for(typeof(container.begin())it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
using namespace std;
struct hasan{
    int asci,frq;
};
bool milani(hasan x,hasan y){
    if(x.frq<y.frq) return 1;
    if(x.frq==y.frq && x.asci>y.asci) return 1;
    return 0;
}
int main()
{
    int i,l,flag=0;
    string s;
    while(getline(cin,s)){
        if(flag) printf("\n");
        flag=1;
        hasan me[1005];
        map<char,int>mp;
        map<char,int>::iterator it;
        l=s.size();
        for(i=0;i<l;i++){
            mp[s[i]]++;
        }
        i=0;
        tr(mp,it){
            int c=it->first;
            int d=it->second;
            me[i].asci=c;
            me[i].frq=d;
            i++;
        }
        int mukul=i;
        sort(me,me+mukul,milani);
        for(i=0;i<mukul;i++){
            cout<<me[i].asci<<" "<<me[i].frq<<endl;
        }
    }
    return 0;
}

