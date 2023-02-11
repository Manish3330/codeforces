#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int p;
    cin>>p;
    int arr[7];
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    int j=0;
    while(p)
    {
      p=p-arr[j];
      if(p<=0){cout<<j+1;break;}
      j=(j+1)%7;
    }
    
    return 0;
}