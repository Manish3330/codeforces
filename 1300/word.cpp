#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     cin>>s;
     int uc=0;
     int lc=0;
     char c;
     for(int i=0;i<s.size();i++ )
     {
        if(s[i]>='A' && s[i]<='Z')
        {
            uc++;
        }
        else 
        {
            lc++;
        }
     }
   
     if(lc>=uc)
     {
         for(int i=0;i<s.size();i++ )
     {
           c=tolower(s[i]);
           cout<<c;
     }
     }
     else 
     {
        for(int i=0;i<s.size();i++ )
     {
           c= toupper(s[i]);
           cout<<c;
     }
     }
    //  for(int i=0;i<s.size();i++ )
    //  {
    //        cout<<s[i];
    //  }
     cout<<endl;
     return 0;

}