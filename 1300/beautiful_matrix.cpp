#include<iostream>
using namespace std;
int main()
{   
    int arr[5][5];
    int sum=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                int x=abs(i-2);
                int y=abs(j-2);
                sum=x+y;
            }
        }
    }
    
  cout<<sum<<endl;

    return 0;
}