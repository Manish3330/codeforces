#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    int l=0;
    int u=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    l=arr[0][0];
    u=arr[0][1];
    int index=0;
    for(int i=1;i<n;i++)
    {
       
         if( l>=arr[i][0] && u<=arr[i][1])
        {
            index=i;
            l=arr[i][0];
            u=arr[i][1];
        }
        // else if(l<=arr[i][0] && u>=arr[i][1])continue;
        // else{
        //     cout<<-1;return 0;
        // }

    }
     for(int i=0;i<n;i++)
     {
         if( l>arr[i][0] || u<arr[i][1] )
        {
           cout<<-1;
           return 0;
        }
     }
    cout<<index+1;
    return 0;
}