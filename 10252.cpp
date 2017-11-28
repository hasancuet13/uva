#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    map<char,int>freq;
    while(getline(cin,s1) && getline(cin,s2)){
        int l1=s1.size();
        int l2=s2.size();
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        freq.clear();
        for(int i=0;i<l1;i++)
        {
            freq[s1[i]]++;
        }
        for(int i=0;i<l2;i++){
            if(freq[s2[i]]){
                cout<<s2[i];
                freq[s2[i]]--;
            }
        }
        cout<<endl;
    }
}
