#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double t1,t2,u,v,d;
    cin>>t;
    int cas=1;
    while(t--)
    {
        cin>>d>>v>>u;
        t1=d/u;
        t2=d/(sqrt(u*u-v*v));
        if(u==0 || u==v || u<v || v==0){
            printf("Case %d: can't determine\n",cas++);
        }
        else{
            printf("Case %d: %.3lf\n",cas++,abs(t1-t2));
        }
    }
}
