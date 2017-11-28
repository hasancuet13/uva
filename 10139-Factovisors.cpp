#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll n,m,fact;
   /*clock_t begin, end;
   double time_spent;
   begin = clock();
   */
   while(cin>>n>>m)
   {
       fact=1;
       for(ll i=1;i<=n;i++){
            fact=((fact%m)*(i%m))%m;
       }
       if(fact==0) cout<<m<<" divides "<<n<<"!\n";
       else cout<<m<<" does not divide "<<n<<"!\n";
   }
   /*end = clock();
   time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
   cerr<<"Time spent = "<<time_spent<<endl;
   */
   return 0;
}
