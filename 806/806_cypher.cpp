#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int j=0;
        while(n--)
        {  int strSize;
           cin>>strSize;
           string str;
           cin>>str;
           int res=0;
           for(int i=0;i<strSize;i++)
           {
              if(str[i]=='U')
              {
                res++;
              }
              else{
                res--;
              }
           }
           res=(arr[j++]-res+10)%10;
           cout<<res<<" ";
        }
        cout<<endl;
    }

    return 0;
}