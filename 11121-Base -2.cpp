#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t=1;
    while(n--){
        int k,r;
        cin>>k;
        if(k==0) {
            cout<<"Case #"<<t++<<": 0"<<endl;
            continue;
        }
        string digits;
        while(k!=0)
        {
            r=k%-2;
            k/=-2;
            if(r<0){
                k++;
                r+=2;
            }
            digits.push_back(r+'0');
        }
        reverse(digits.begin(),digits.end());
        cout<<"Case #"<<t++<<": "<<digits<<endl;
    }
}
