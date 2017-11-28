#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,s,d,T;
    cin>>T;
    while(T--){
        cin>>s>>d;
        b=abs((s-d)/2);
        a=s-b;
        if((a+b)==s && abs(a-b)==d)
        cout<<max(a,b)<<" "<<min(a,b)<<endl;
        else
            cout<<"impossible\n";
    }
    return 0;
}
