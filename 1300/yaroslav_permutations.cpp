#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int>m;
    int n;
    cin>>n;
    int arr[n];
    int k=(n+1)/2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
        if(m[arr[i]]>k){cout<<"NO";return 0;}
    }
    cout<<"YES";
    return 0;
}