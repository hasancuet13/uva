#include<bits/stdc++.h>
using namespace std;
long long EX_UC(long long a,long long b,long long &x,long long &y)
{
    long long x1,y1;
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    long long d=EX_UC(b,a%b,y1,x1);
    x=x1;
    y=y1-(a/b)*x1;
    return d;
}
int main()
{
    long long n,c,c1,c2,n2,n1,a,b,x,y,g,lowx,upx;
    while(cin>>n && n>0){
        cin>>c1>>n1;
        cin>>c2>>n2;
        a=n1;
        b=n2;
        c=n;
        g=EX_UC(a,b,x,y);
        if(c%g){
            printf("failed\n");
            continue;
        }
        lowx=ceil(-1.0*x*c/(double)b);
        upx=floor(c*y*1.0/(double)a);
        if(upx<lowx){
            printf("failed\n");
            continue;
        }
        if(c1*b<=a*c2){
            x=x*(c/g)+upx*(b/g);
            y=y*(c/g)-upx*(a/g);
        }
        else{
            x=x*(c/g)+lowx*(b/g);
            y=y*(c/g)-lowx*(a/g);
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
