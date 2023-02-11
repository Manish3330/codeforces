#include<iostream>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int curr=s[0]-'0';
  int t=1;
  for(int i=1;i<s.size();i++)
  {
    if(s[i]=='0' && curr==0)
    {
        t++;
    }
    else if( s[i]=='1' && curr==1)
    {
        t++;
    }
    else{
        t=1;
        curr=s[i]-'0';
    }
    if(t>=7)
    {
        cout<<"YES";
        return 0;
    }
  }
  cout<<"NO";
  return 0;
}