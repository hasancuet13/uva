#include<bits/stdc++.h>
using namespace std;
vector<int>E[100];
int parent[100];
int level[100];
int n,e,src;
void bfs(int src)
{
    queue<int>Q;
    Q.push(src);
    bool visited[100];
    memset(visited,0,sizeof(visited));
    visited[src]=true;
    level[src]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        for(int i=0;i<E[u].size();i++){
            int v=E[u][i];
            if(!visited[v]){
                level[v]=level[u]+1;
                parent[v]=u;
                visited[v]=true;
                Q.push(v);
            }
        }
        Q.pop();
    }
    for(int i=1;i<=n;i++){
        cout<<src<<" "<<i<<' '<<level[i]<<endl;
    }
}
int main()
{
    freopen("input1.txt","r",stdin);
    cin>>n>>e;
    for(int i=1;i<=e;i++){
        int x,y;
        cin>>x>>y;
        E[x].push_back(y);
        E[y].push_back(x);
    }
    cin>>src;
    bfs(src);
}
