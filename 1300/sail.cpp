#include<bits/stdc++.h>
using namespace std;
int main()
{   
    unordered_map<int,int>m;
    m['E']=-1;
    m['S']=+1;
    m['W']=+1;
    m['N']=-1;
    int t,ex,ey,sx,sy;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    int dx=ex-sx;
    int dy=ey-sy;
    for(int i=0;i<s.size();i++)
    {
      if(dx<0 && s[i]=='W')
      {
        dx+=m[s[i]];
      }
      if(dx>0 && s[i]=='E')
      {
         dx+=m[s[i]];
      }
      if(dy>0 && s[i]=='N')
      {
         dy+=m[s[i]];
      }
       if(dy<0 && s[i]=='S')
      {
         dy+=m[s[i]];
      }
      if(dx==0 && dy==0)
      {
        cout<<i+1;
        break;
      }
    }
    if(dx!=0 || dy!=0)
    {
        cout<<-1;
    }
    
    return 0;
}