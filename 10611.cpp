#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,c;
    while(cin>>n){
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       // vector<int>vp(a,a+n);
        //vector<int>::iterator lo,hi;
        //sort(vp.begin(),vp.end());
        cin>>q;
        for(int i=0;i<q;i++){
            cin>>c;
           // if(binary_search(vp.begin(),vp.end(),c)){
               int *lo=lower_bound(a,a+n,c);
               int *hi=upper_bound(a,a+n,c);
               int high=hi-a;
               lo--;
               int low=lo-a;
              // cout<<high<<" "<<low;
               if(lo==a+n || lo-a<0){
                    cout<<'X'<<' '<<a[high]<<endl;
               }
               else if(hi==a+n){
                    cout<<a[low]<<' '<<'X'<<endl;
               }
               else{
                    cout<<a[low]<<' '<<a[high]<<endl;
               }
               // cout<<(lo-vp.begin())<<' '<<(hi-vp.end())<<endl;
            //}
        }
    }
}
