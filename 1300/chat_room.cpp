#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char arr[]={'h','e','l','l','o'};
    int j=0;
    for(int i=0;i<s.size() && j<5;i++)
    {   
        if(s[i]!=arr[j])
        {
            continue;
        }
        else if(s[i]==arr[j])
        {
            j++;

        }
      
    }
    
    if(j==5)cout<<"YES";
    else cout<<"NO";
    
    return 0;
}