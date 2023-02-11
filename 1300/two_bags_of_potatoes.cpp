#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,k,n;
    cin>>y>>k>>n;
    int px=n-y;
    // if(y%k==0){cout<<-1;return 0;}
    int x=-y%k;
    int f=0;
    while(x+k<=px)
    {   f=1;
        x=k+x;
        cout<<x<<" ";
    }
    if(f==0){cout<<-1;}

    return 0;
}