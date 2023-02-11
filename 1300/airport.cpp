#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,m;
    cin>>n>>m;
    int arr[m];
    priority_queue<int>pq;

    for(int i=0;i<m;i++)
    {
      cin>>arr[i];
      pq.push(arr[i]);
    }
    sort(arr,arr+m);
    int j=0;
    int mini=0;
    for(int i=0;i<n;i++)
    { 
       mini+=arr[j];
       arr[j]--;
       if(arr[j]==0)
       {
        j++;
       }
      
    }
    j=0;
    int maxi=0;
    while(n-- )
    {
      int a= pq.top();
      maxi+=a;
      a--;
      pq.pop();
      pq.push(a);
    }
 

   cout<<maxi<<" "<<mini;
    return 0;
}