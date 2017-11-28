#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,q,s,c,z;
    cin>>t;
    int cas=1;
    while(t--)
    {
        cin>>n>>p>>q;
        int e[n];
        for(int i=0;i<n;i++){
            cin>>e[i];
        }
        s=0,c=0;
        for(int i=0;i<n && i<p;i++)
        {

                s+=e[i];
                if(s<=q){
                    c++;
                }
        }
        printf("Case %d: %d\n",cas++,c);
    }
}
