#include<iostream>
using namespace std;
int main()
{ 
    int arr[3][3];
    int ans[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
            arr[i][j]=arr[i][j]%2;
            ans[i][j]=1;
        }
    }
    for(int i=0;i<3 ;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
            {
                
                if(ans[i][j]==0)ans[i][j]=1;
                else ans[i][j]=0;

                if(  i>0 && ans[i-1][j]==1)
                {
                    ans[i-1][j]=0;

                }
                else  if( i>0 && ans[i-1][j]==0 )
                {
                    ans[i-1][j]=1;
                    
                }
                if( j<2 && ans[i][j+1]==0)
                {
                    ans[i][j+1]=1;
                    
                }
                 else  if( j<2 && ans[i][j+1]==1 )
                {
                    ans[i][j+1]=0;
                    
                }
                 if( j>0 && ans[i][j-1]==0)
                {
                    ans[i][j-1]=1;
                    
                }
                 else  if( j>0 && ans[i][j-1]==1)
                {
                    ans[i][j-1]=0;
                    
                }
                 if( i<2 && ans[i+1][j]==1)
                {
                    ans[i+1][j]=0;

                }
                else  if( i<2 && ans[i+1][j]==0)
                {
                    ans[i+1][j]=1;
                    
                }
            }
        }
    }
    for(int i=0;i<3 ;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}