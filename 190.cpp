#include<bits/stdc++.h>
using namespace std;
vector<double>d;
int main()
{
    float x1,y1,x2,y2,x3,y3,d,d1,d2,d3,c_x,c_y,c_1,h,k,r;
    int t=0;
    char c,c1,c2,c3,c4;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3){
        if(t++) cout<<endl;
        d=x1*(y2-y3)-y1*(x2-x3)+(x2*y3-x3*y2);
        d1=(x1*x1+y1*y1)*(y2-y3)-y1*((x2*x2+y2*y2)-(x3*x3+y3*y3))+(y3*(x2*x2+y2*y2)-y2*(x3*x3+y3*y3));
        d2=(x1*x1+y1*y1)*(x2-x3)-x1*((x2*x2+y2*y2)-(x3*x3+y3*y3))+(x3*(x2*x2+y2*y2)-x2*(x3*x3+y3*y3));
        d3=(x1*x1+y1*y1)*(x2*y3-x3*y2)-x1*(y3*(x2*x2+y2*y2)-y2*(x3*x3+y3*y3))+y1*(x3*(x2*x2+y2*y2)-x2*(x3*x3+y3*y3));
        c_x=-(d1/d);
        c_y=(d2/d);
        c_1=-(d3/d);
        h=(c_x/-2);
        k=(c_y/-2);
        r=sqrt(h*h+k*k-c_1);
        if(h<0){
            h=-h;
            c='+';
        }
        else{
            h=h;
            c='-';
        }
        if(k<0){
            k=-k;
            c1='+';
        }
        else{
            k=k;
            c1='-';
        }
        if(c_x>0){
            c_x=-c_x;
            c2='+';
        }
        else{
            c_x=c_x;
            c2='-';
        }
        if(c_y>0){
            c_y=-c_y;
            c3='+';
        }
        else{
             c_y=c_y;
            c3='-';
        }
        if(c_1>0){
            c_1=-c_1;
            c4='+';
        }
        else{
            c_1=c_1;
            c4='-';
        }
        printf("(x %c %.3lf)^2 + (y %c %.3lf)^2 = %.3lf^2\n",c,fabs(h),c1,fabs(k),r);
        printf("x^2 + y^2 %c %.3lfx %c %.3lfy %c %.3lf = 0\n",c2,fabs(c_x),c3,fabs(c_y),c4,fabs(c_1));
    }
}

