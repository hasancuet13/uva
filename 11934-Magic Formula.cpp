#include<bits/stdc++.h>
using namespace std;
int main()
{
    long a,b,c,d,l,f,i,x;
    while(cin>>a>>b>>c>>d>>l)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0) break;
        f=0,x=0;
        for(i=0;i<=l;i++){
            f=a*pow(i,2)+b*i+c;
            if(f%d==0){
                x++;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
