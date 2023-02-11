#include<bits/stdc++.h>
using namespace std;
int main()
{  string temp=" ";
    string s;
    cin>>s;
    string ans;
    for(int i=0;i<s.size();i++)
    {
      if(i<=s.size()-3 && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
        i=i+2; continue;
      }
      ans+=s[i];
      if(i<=s.size()-3 && s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B'){
       ans+=temp ; i=i+3; 
      }
    }
    cout<<ans;
    return 0;
}