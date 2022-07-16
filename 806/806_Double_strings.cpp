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
        unordered_map<string,int>m;
        vector<string>v;
        for(int i=0;i<n;i++)
        {   string str;
            cin>>str;
            v.push_back(str);
            m[str]++;

        }
         string res="";
        for(int i=0;i<n;i++)
        {   string str=v[i];
            int flag=0;
            for(int j=1;j<str.size();i++)
            {
                string temp=str.substr(j);
                string temp1=str.substr(0,j);
                if(m.find(temp)!=m.end() && m.find(temp1)!=m.end() )
                {
                    res+="1";
                    flag=1;
                    break;
                }
            }
            if(flag!=1)
             res+="0";
        }
        cout<<res;
        cout<<endl;
    }

    return 0;
}