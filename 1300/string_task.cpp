#include<bits/stdc++.h>

using namespace std;
int main()
{   string s;
    cin>>s;
    string ans="";
    int i=0;
    unordered_map<char,int>ma;
    ma['A']++;
    ma['E']++;
    ma['O']++;
    ma['Y']++;
    ma['I']++;
    ma['U']++;
    ma['a']++;
    ma['e']++;
    ma['y']++;
    ma['i']++;
    ma['o']++;
    ma['u']++;
    while(i<s.size())
    {  
        while( ma.find(s[i]) != ma.end() && i<s.size())
        {
            i++;
        }
        if(s[i]>=65 && s[i]<=90 &&  i<s.size() )
        {
            ans+='.';
            s[i]=s[i]+32;
            ans+=s[i];
        }
        else if(  i<s.size()){
              ans+='.';
              ans+=s[i];
        }
        i++;
    }
    cout<<ans;
    return 0;
}