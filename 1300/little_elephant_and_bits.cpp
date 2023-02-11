#include<bits/stdc++.h>
using namespace std;
int main()
{   string s;
    cin>>s;
   
    int f=0;
    int i=0;
    while(i<s.size())
    {
        if(s[i]=='0')
        {
            f=1;
        }
        if(f==1)
        {
            s[i]=s[i+1];
        }
        i++;
    }
    s.pop_back();
    cout<<s;
    return 0;
}