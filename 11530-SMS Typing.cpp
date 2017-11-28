#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas=0;
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        int l=s.size();
        int c=0;
        for(int i=0;i<l;i++){
            if(s[i]==' ') c++;
            if(s[i]=='a') c++;
            if(s[i]=='b') c+=2;
            if(s[i]=='c') c+=3;
            if(s[i]=='d') c+=1;
            if(s[i]=='e') c+=2;
            if(s[i]=='f') c+=3;
            if(s[i]=='g') c+=1;
            if(s[i]=='h') c+=2;
            if(s[i]=='i') c+=3;
            if(s[i]=='j') c+=1;
            if(s[i]=='k') c+=2;
            if(s[i]=='l') c+=3;
            if(s[i]=='m') c+=1;
            if(s[i]=='n') c+=2;
            if(s[i]=='o') c+=3;
            if(s[i]=='p') c+=1;
            if(s[i]=='q') c+=2;
            if(s[i]=='r') c+=3;
            if(s[i]=='s') c+=4;
            if(s[i]=='t') c+=1;
            if(s[i]=='u') c+=2;
            if(s[i]=='v') c+=3;
            if(s[i]=='w') c+=1;
            if(s[i]=='x') c+=2;
            if(s[i]=='y') c+=3;
            if(s[i]=='z') c+=4;
        }
        printf("Case #%d: %d\n",++cas,c);
    }
}
