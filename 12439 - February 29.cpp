#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--){
        char s1[100],s2[100];
        char c1,c2;
        long long m1,y1,m2,y2,year,f,h,fh;
        cin>>s1>>m1>>c1>>y1;
        cin>>s2>>m2>>c2>>y2;
        if(strcmp(s1,"January")!=0 && strcmp(s1,"February")!=0) y1++;
        if(strcmp(s2,"January")==0 ||(strcmp(s2,"February")==0 && m2<29))
            y2--;

        f=((y2/4-(y1-1)/4));
        fh=((y2/400-(y1-1)/400));
        h=((y2/100-(y1-1)/100));
        year=f-h+fh;
        cout<<"Case "<<++c<<": "<<year<<endl;
    }
}
