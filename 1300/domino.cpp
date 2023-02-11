#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    int arr[n][2];
    int sumx=0;
    int sumy=0;
   int x=pow(2,3);
   cout<<x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        sumx+=arr[i][0];
        sumy+=arr[i][1];
    }
    if(sumx%2==0 && sumy%2 ==0)
    {
        cout<<0;
    }
    else if(sumx%2!=0 && sumy%2 !=0)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i][0]%2+arr[i][1]%2==1)
            {
                cout<<1;return 0;
            }
        }
        cout<<-1;
        
    }
    else
    {  
       cout<<-1;
    }


    return 0;
}