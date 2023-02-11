#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    queue<pair<int,int>>q;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        q.push({t,i+1});
    }
    int i=0;
    while(!q.empty())
    {
      auto a = q.front();
      q.pop();
      a.first=a.first-m;
      i=a.second;
      if(a.first>0)q.push({a.first,a.second});
    }
    cout<<i;
    return 0;
}