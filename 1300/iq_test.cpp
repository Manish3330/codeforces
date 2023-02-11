#include<bits/stdc++.h>
using namespace std;
bool checker(char a,char b,char mat[4][4])
{
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        if(mat[i][j]==a)
        {
            if(mat[i+1][j]=='b' && mat[i][j+1]=='b' && mat[i+1][j+1]=='b')return true;
        }
    }
}
return false;
}
int main()
{   
    char mat[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>mat[i][j];
        }
    }
    if(checker('.','#',mat) == true || checker('#','.',mat)==true )cout<<"YES";
    cout<<"NO";
    

    return 0;
}