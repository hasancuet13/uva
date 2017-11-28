#include<bits/stdc++.h>
using namespace std;
/*int Extented_Euclid(int A,int B,int *x,int *y)
{
    int u,v,m,n,a,b,q,r;
    /// B=A(0)+B(1)
    x=0; ///x[i-2]
    y=1; ///y[i-2]
    u=1; ///x[i-1]
    v=0; ///y[i-1]
    a=A;
    b=B;
    while(a!=0){
        q=b/a;

        ///GCD
        r=b%a;
        b=a;
        a=r;
        ///r=A(x-uq)+B(y-vq)
        m=x-(u*q);
        n=y-(v*q);
        x=u;
        y=v;
        u=m;
        v=n;
    }
    *X=x;
    *Y=y;
    return b;
}*/
//Recursive::
int gcdExtended(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}
int main()
{
    int x,y,a,b,n,c1,c2,n1,n2,m1,m2;
    while(cin>>n && n!=0){
        cin>>c1>>n1;
        cin>>c2>>n2;
        m1=gcdExtended(c1,n1,&x,&y);
        m2=gcdExtended(c2,n2,&a,&b);
        cout<<m1<<m2<<endl;
    }
    return 0;
}
