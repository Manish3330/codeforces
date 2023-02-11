#include<iostream>
using namespace std;
int main()
{
    int s;
    cin>>s;
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.size()-1;i++)
    {
        if(str[i]==str[i+1])count++;
    }
    cout<<count<<endl;
    return 0;
}