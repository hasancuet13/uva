#include<bits/stdc++.h>
#define open() freopen("input1.txt", "r", stdin)
using namespace std;
int main()
{
    int n,e,src;
    //open();
    while(cin>>n && n){
        int x,y,u;
        cin>>e;
        vector<int>E[100000];
        int color[10000];
        memset(color,-1,sizeof(color));
        for(int i=0;i<e;i++){
            cin>>x>>y;
            E[x].push_back(y);
            E[y].push_back(x);

        }
        src=0;
        queue<int>Q;
        int flag=0;
        color[src]=0;
        Q.push(src);
        while(!Q.empty()){
            u=Q.front();
            Q.pop();
            int vi=E[u].size();
            for(int i=0;i<vi;i++){
                    int v=E[u][i];
                if(color[v]==-1){
                    if(color[u]==0){
                        color[v]=1;
                    }
                    else{
                        color[v]=0;
                    }
                    Q.push(v);
                }
                else{
                    if(color[v]==color[u]){
                        flag=1;
                        break;
                    }
                }
            }
            //if(flag==1) break;
        }
        if(flag==1) printf("NOT BICOLORABLE.\n");
        else printf("BICOLORABLE.\n");


    }
}
