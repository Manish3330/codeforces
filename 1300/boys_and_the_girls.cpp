#include<bits/stdc++.h>
using namespace std;
int main()
{   
      freopen("input.txt", "rt", stdin);
      freopen("output.txt", "wt", stdout);
    int n,m;
    cin>>n>>m;
    if(n>=m)
    {
        for(int i=0,j=0;i<n || j<m;i++,j++)
        {
            if(i<n)
            {
                cout<<"B";
            }
            if(j<m)
            {
                cout<<"G";
            }
        }

    }
    else{
        for(int i=0,j=0;i<n || j<m;i++,j++)
        {   if(j<m)
            {
                cout<<"G";
            }
            if(i<n)
            {
                cout<<"B";
            }
            
        }
    }
    return 0;
}