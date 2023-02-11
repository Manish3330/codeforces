#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,m;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr1[i];
    }
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    unordered_map<int,int>map;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr2[j] % arr1[i]==0)
            {
             int a=arr2[j] /arr1[i];
             map[a]++;
            }
        }
    }
    int t=INT_MIN;
    int ans=INT_MIN;
    for( auto a: map)
    {
       int k= a.first;
       if(k>t)
       {
        t=k;
        ans=map[k];
       }
    }
    cout<<ans<<endl;
    return 0;
}