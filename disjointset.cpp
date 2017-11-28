#include<bits/stdc++.h>
using namespace std;
int parent[10];
void make_set(int n)
{
    parent[n]=n;
}
int finder(int r)
{
    return (parent[r]==r)?r:finder(parent[r]);
}
int friend_checker(int a,int b)
{
    int u=finder(a);
    int v=finder(b);
    if(u==v)cout<<"They are friend\n";
    else parent[u]=v;
}
int main()
{
    int node,a,b,ch1;
    cin>>node;
    cin>>a>>b;
    for(int i=1;i<=node;i++){
        cin>>ch1;
        make_set(ch1);
    }
    friend_checker(a,b);
}
