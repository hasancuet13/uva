#include<bits/stdc++.h>
using namespace std;
int LowerBound(int arr[],int Q, int n) {
    int lo=0, hi=n-1;
    int best_so_far=-1;
    while(lo<=hi) {
        int mid = (hi+lo)/2;
        if(arr[mid]>=Q) {
            if(arr[mid]==Q)
                best_so_far=mid;
            hi = mid-1;
        } else lo = mid+1;
    }
    return best_so_far;
}
int UpperBound(int arr[],int Q, int n) {
    int lo=0, hi=n-1;
    int best_so_far=-1;
    while(lo<=hi) {
        int mid = (hi+lo)/2;
        if (arr[mid]<=Q) {
            if(arr[mid]==Q)
                best_so_far=mid;
            lo=mid+1;
        } else hi=mid-1;
    }
    return best_so_far;
}
int main()
{
    int n,q,l;
    freopen("input1.txt","r",stdin);
    while(cin>>n){
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>q;
        sort(a,a+n);
        l=LowerBound(a,q,n);
        int u=UpperBound(a,q,n);
        cout<<l<<' '<<u;
    }
}
