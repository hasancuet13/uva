#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ullt;


ullt C[61][61]={0};
ullt trib (int n, int back)
{
	if (n <= 1) return 1;
	if (C[n][back] != 0) return C[n][back];


	C[n][back] = 1;
	for (int i=1; i<=back; i++)
	C[n][back] += trib(n-i,back);
	return C[n][back];
 }
 int main()
 {
     int n, back, Case=1;
     while (scanf("%d%d",&n,&back)){
         if (n > 60) break;
         printf("Case %d: %llu\n",Case++,trib(n,back));
     }
     return 0;
 }
