#include<bits/stdc++.h>
using namespace std;
int main()
{   int y;
    cin>>y;

    for(int i=1;i<=9000;i++)
    {
        int  year=y+i;
        unordered_map<int,int>m;
        int f=0;
        while(year)
        {
            int r=year%10;
            year=year/10;
            m[r]++;
            if(m[r]>1)
            {   f=1;
                break;
            }

        }
        if(f==0)
        {
            cout<<y+i<<endl;
            break;
        }
    }
    return 0;
}