#include<bits/stdc++.h>
using namespace std;
int main()
{  
int a,b,c;
cin>>a>>b>>c;
int sum=0;
long long int mod= 1073741824;
int d[a*b*c+1]={0};

    for(int i=1;i<=a*b*c+1; i++)
    {
        for(int j=i;j<=a*b*c+1;j+=i)
        {
           d[j]++;
        }
    }

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {     
               sum+=d[i*j*k]%mod;
            }
        }
    }
    cout<<sum;
    return 0;
}