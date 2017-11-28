#include<bits/stdc++.h>
using namespace std;
int *ara,n,k,ans;
int main()
{
	ara =(int*) malloc(1000004*4);
	while(scanf("%d",&n)==1)
	{
		for(int i=0;i<n;i++)
			scanf("%d",&ara[i]);
		scanf("%d",&k);
		for(int i=0;i<=n-k;i++)
		{
			ans=ara[i];
			for(int j=1;j<k;j++)
			{
				if(ara[i+j]>ans)
				ans=ara[i+j];
			}
			cout<<ans<<' ';
		}
	}

}
