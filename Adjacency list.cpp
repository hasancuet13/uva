#include<bits/stdc++.h>
using namespace std;
vector<int>edge[100],cost[100];
int indegree[100];
int main()
{
        int e,n;
        while(cin>>n>>e){
        int x,y;
        for(int i=1;i<=e;i++){
            cin>>x>>y;
            edge[x].push_back(y);
            indegree[y]++;
            cost[x].push_back(1);
            cost[y].push_back(1);
        }
        for(int i=1;i<=n;i++){
            int siz=edge[i].size();
            cout<<i<<": ";
            for(int j=0;j<siz;j++){
                cout<<edge[i][j]<<" ";
            }
            cout<<"indegree : "<<indegree[i]<<endl;
            cout<<"Out-degree:"<<siz<<" ";
            cout<<endl;
        }
    }
    return 0;
}
