#include<iostream>
using namespace std;
int main()
{   int t;
cin>>t;
if(t%2!=0)cout<<-1<<endl;
else{
    for(int i=2; i<=t; i+=2)
    {
       cout<<i<<" "<<i-1<<" ";
    }
    cout<<endl;
}
    return 0;
}