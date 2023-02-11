#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        m[t]=i;
    }
    long long int vasya=0;
    long long int petya=0;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {   
        int t;
        cin>>t;
        vasya+=m[t]+1;
        petya+=n-m[t];
    }
    cout<<vasya<<" "<<petya;
    return 0;
}