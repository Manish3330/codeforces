#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {       
            int z=n-a*i-b*j;
            if(z>=0 && (n-a*i-b*j)%c==0)
            {
                ans=max(ans,i+j+z/c);
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}