#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
       cin>>arr[i];
    }
    int maxi =0; int mini=0;
    int maxv=INT_MIN;int minv=INT_MAX;
    for(int i=0; i<t;i++)
    { 
        if(maxv<arr[i])
        {
            maxv=arr[i];
            maxi=i;
        }
        if(minv>=arr[i])
        {
            minv=arr[i];
            mini=i;
        } 
    }
    if(maxi>mini)
    {
        cout<<maxi-1+t-mini-1;
    }
    else{
        cout<<maxi-1+t-mini;
    }

    return 0;
}