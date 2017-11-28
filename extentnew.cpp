#include<bits/stdc++.h>
using namespace std;
int EX_UC(int A,int B,int *X,int *Y)
{
    int x,y,u,v,r,q,m,n,i,j,l,a,b;
    x=0;
    y=1;
    u=1;
    v=0;
    for(a=A,b=B;a!=0;b=a,a=r,x=u,y=v,u=m,v=n){
        r=b%a;
        q=b/a;
        m=x-(u*q);
        n=y-(v*q);
    }
    *X=x;*Y=y;
    return b;
}
int main()
{
    int a,b,x,y,g;
    cin>>a>>b;
    g=EX_UC(a,b,&x,&y);
    cout<<x<<" "<<y<<" "<<g<<endl;
}
