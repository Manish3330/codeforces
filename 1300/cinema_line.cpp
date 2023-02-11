#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int rem=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==25)rem+=25;
        else if(arr[i]==50) rem-=25;
        else if(arr[i]==100)rem-=75;
       if(rem<0){cout<<"NO";return 0;}
    }
    if(rem>=0)cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}