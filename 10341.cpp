#include<bits/stdc++.h>
#define eps 1e-7
using namespace std;
int p,q,r,s,t,u;
double f(double x){
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}
int main()
{
    while(cin>>p>>q>>r>>s>>t>>u)
    {
        double low=0,high=1,mid;
        while((high-low)>eps){
            mid=(low+high)/2;
            if(f(low)*f(mid)<=0){
                high=mid;
            }
            else{
                low=mid;
            }
        }
        if(f(0)*f(1)>0){
            printf("No solution\n");
        }
        else{
            printf("%.4lf\n",mid);
        }
    }
}
