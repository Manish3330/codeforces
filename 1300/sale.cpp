#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int m;
    cin>>m;
    priority_queue<int,vector<int>,greater<int>>p;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a<0)
        {
            p.push(a);
        }
    }
    int sum=0;
    for(int i=0;i<m && !p.empty();i++)
    {
        int a = p.top();
       
        p.pop();
        if(a<0 )
        {
            sum+=a;
        }
    }
    cout<<-sum<<endl;
    return 0;
}