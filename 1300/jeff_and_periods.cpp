#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int arr[a];
    map<int,pair<int,int>>ma;
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
        if(ma.find(arr[i])==ma.end())
        {
            ma[arr[i]]= {-1,i};
        }
        else{
            if(ma[arr[i]].first==-1)
            {
                ma[arr[i]].first=i-ma[arr[i]].second;
                ma[arr[i]].second=i;
            }
           else if(ma[arr[i]].first>0){
                int cd=ma[arr[i]].first;
                if(arr[i]!=arr[i-cd])
                {
                    ma[arr[i]].first=-2;
                     ma[arr[i]].second=i;
                }
            }
           
        }
    }
    int ans=0;
     for(auto it: ma)
    {
       
        if(it.second.first==-1){ ans++;}
        else if(it.second.first>0){ ans++;}
        
    }
cout<<ans<<endl;
    for(auto it: ma)
    {
       
        if(it.second.first==-1){ cout<<it.first<<" "; cout<<0;}
        else if(it.second.first>0){ cout<<it.first<<" ";cout<<it.second.first;}
        cout<<endl;
    }
    
    return 0;
}