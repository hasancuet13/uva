#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,R,cas=0;
    while(cin>>N>>R && N && R){
        if(((N-1)/R)>26)
            printf("Case %d: impossible\n",++cas);
        else
            printf("Case %d: %d\n",++cas,(N-1)/R);
    }
}
