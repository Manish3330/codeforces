#include<iostream>
using namespace std;
int main()
{   
    string s;
    string t;
    cin>>s;
    cin>>t;
    int j=s.size()-1;
    int k=0;
    int a=-2;
    int b=-2;
    if(s.size()!=t.size()){cout<<"NO"<<endl;return 0;}
    for(int i=0;i<s.size();i++,j--)
    {
        if(s[i]!=t[i])
        {   if(a<0)
             a=i;
            else if(a>=0)b=i;
            k++;
        }
        
    }
    if(k>2){cout<<"NO"<<endl;return 0;}
    if(s[a]==t[b] && s[b]==t[a])cout<<"YES";
    else{
        cout<<"NO";
    }
    return 0;
}