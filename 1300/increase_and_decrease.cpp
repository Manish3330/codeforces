#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int arr[n];
    int sum=0;int ok=0;
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
     sum+=arr[i];
    }
    int mid=sum/n;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==mid)ok++;
        else
        {
            arr[i+1]+=arr[i]-mid;
            arr[i]=mid;
            ok++;
        }
        
    }
    if(arr[n-1]==mid)ok++;
    cout<<ok;
    return 0;
}