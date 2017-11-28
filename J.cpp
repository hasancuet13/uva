#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    string s;
    cin>>x;
    getchar();
    getline(cin,s);
    if(s=="of week"){
        //if(x==3) cout<<53<<endl;
        if(x==5) cout<<53<<endl;
        else if(x==6) cout<<53<<endl;
        //else if(x==4) cout<<53<<endl;
        //else if(x==7) cout<<53<<endl;
        else
       cout<<52<<endl;
    }
    if(s=="of month")
    {
        if(x==30){
            cout<<11<<endl;
        }
        else if(x==31){
            cout<<7<<endl;
        }
        else{
            cout<<12<<endl;
        }
    }
}
