#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    unordered_map<char,int>m;
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    string ans="";
    for( auto a:m)
    {
        if(a.second % t !=0)
        {
            cout<<-1;
            return 0;
        }
        int f= m[a.first]/t;
        while(f--)
        {
            ans+=a.first;
        }
    }
    string temp=ans;
    while(t-->1)
    {
        ans+=temp;
    }
    cout<<ans;
    return 0;
}