#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;   getline(cin,s);
   unordered_map<char,int>m1;
   for(int i=0;i<s.size();i++)
   {
      if(s[i]== ' ')continue;
      m1[s[i]]++;
   } 
   string t;   getline(cin,t);
   unordered_map<char,int>m2;
   for(int i=0;i<t.size();i++)
   {
    
    if(t[i]==' ')continue;
    if(m1.find(t[i])== m1.end())
    {
        cout<<"NO"; return 0;
    }
    m2[t[i]]++;
   }
    for(int i=0;i<t.size();i++)
   {
    if(t[i]==' ')continue;
    if(m1[t[i]]<m2[t[i]])
    {
        cout<<"NO"; return 0;
    }
   
   }
   cout<<"YES"<<endl;
    return 0;
}