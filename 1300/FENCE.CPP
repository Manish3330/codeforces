#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,k;
    cin>>n>>k;
    int arr[n];
    int sum=0;
    int index=1;
    int prevsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i<k)
        {
            sum+=arr[i];
            prevsum+=arr[i];
            // cout<<sum<<prevsum;
        }
        else{
            sum=sum-arr[i-k]+arr[i];
            //   cout<<sum<<prevsum;
        }
        if(sum<prevsum)
        {
            prevsum=sum;
            index=i-k+1+1;
        }
    }
    cout<<index;
    return 0;
}