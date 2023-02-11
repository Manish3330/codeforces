#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {  string s;
        cin>>s;
        m[s]++;
    }
    string s;
    int t=INT_MIN;
    for(auto a: m)
    {   string k=a.first;
        if(m[k]>t)
        {   t=m[k];
            s=k;

        }
     
    }
    cout<<s;
    return 0;
}