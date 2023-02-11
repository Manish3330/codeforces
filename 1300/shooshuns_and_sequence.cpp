#include<iostream>
using namespace std;
int main()
{
    int a;int b;
    cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    for(int i=b;i<a;i++)
    {
       if(arr[i]!=arr[i-1])
       {
        cout<<-1;
        return 0;
       }
    }
    int j=-1;
    for(int i=0;i<b-1;i++)
    {
      if(arr[i]!=arr[a-1])
      {
        j=i;
      }
    }
     
    if(j<=b)
    cout<<j+1;
    else{
        cout<<-1;
        }
    return 0;
}