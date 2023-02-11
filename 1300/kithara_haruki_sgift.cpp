#include<iostream>
using namespace std;
int main()
{   int a;
    cin>>a;
    int c1=0;
    int c2=0;
    int arr[a];
    if(a==1){cout<<"NO";return 0;}
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        if(arr[i]==100)c1++;
        else c2++;
    }
    if(c1==0 && c2%2==0)cout<<"YES";
   else if(c2==0 && c1%2==0)cout<<"YES";
    else if(c1%2 ==0 && c2%2==0 && c1>0 && c2>0 )cout<<"YES"<<endl;
   else if(c1%2==0 && c2%2!=0 && c1>0 && c2>0   )cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}