#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        pair<int,int> t= v[i];
        int l=0,r=0,u=0,b=0;
        for(int j=0;j<n ;j++)
        {   if(j==i)continue;
            pair<int,int>s=v[j];
            if(s.first==t.first && s.second<t.second)
            {
                l=1;
                break;
            }
            
        }
         for(int j=0;j<n ;j++)
        {   if(j==i)continue;
            pair<int,int>s=v[j];
            if(s.first==t.first && s.second>t.second)
            {
                r=1;
                break;
            }
            
        }
         for(int j=0;j<n ;j++)
        {   if(j==i)continue;
            pair<int,int>s=v[j];
            if(s.first>t.first && s.second==t.second)
            {
                u=1;
                break;
            }
            
        }
         for(int j=0;j<n ;j++)
        {   if(j==i)continue;
            pair<int,int>s=v[j];
            if(s.first<t.first && s.second==t.second)
            {
                b=1;
                break;
            }
            
        }

       if(l==1 && r==1 && u==1 && b==1 )
       {
          ans++;
       }

    }
    cout<<ans;
    return 0;
}