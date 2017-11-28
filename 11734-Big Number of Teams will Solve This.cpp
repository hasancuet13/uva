#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    int cas=1,flag;
    while(t--)
    {
        string s1,s2,s;
        getline(cin,s1);
        getline(cin,s2);
        if(s1==s2){
            printf("Case %d: Yes\n",cas++);
        }
        else{
            flag=0;
            for(int i=0;i<s1.length();i++){
                if(s1[i]==' '){
                    flag =1;
                }
                else{
                    s+=s1[i];
                }
            }
            if(flag==1 && s==s2){
                printf("Case %d: Output Format Error\n",cas++);
            }
            else{
                printf("Case %d: Wrong Answer\n",cas++);
            }
        }
    }
    return 0;
}
