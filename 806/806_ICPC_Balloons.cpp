#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       string str;
       cin>>str;
       unordered_map<char,int>m;
       for(auto c:str)
       {
        m[c]++;
       }
       int res=0;
       for (auto i : m)
       {
          res+=i.second+1;
       }
      cout<<res<<endl;
    }

    return 0;
}