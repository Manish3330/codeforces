#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]>='a' && s[0]<='z' )
    {
        s[0]=s[0]-32;
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
    return 0;
}