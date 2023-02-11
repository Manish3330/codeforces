#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    int k= t.size();
    for(int i=0;i<k;i++)
    {
        if(s[i] != t[k-1-i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
