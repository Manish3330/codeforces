#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
     cin>>t;
    long long int lc=0;
     int f=1;
    while(t )
    {
       int y=t%10;
       if(y==4 || y==7)
      {
        lc++;
      }
      
      t=t/10;
     
    }
    long long int l=lc;
    while(lc && f==1)
    {   
        int y=lc%10;
        if(y==4||y==7)
        {   lc=lc/10;
            continue;
        }
        else{
         f=0;
        break;
         
        }
        lc=lc/10;
        
    }
    if(f==1 && l!=0 )
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}