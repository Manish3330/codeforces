#include<bits/stdc++.h>
using namespace std;
int main()
{  
  multiset<pair<int,int>>st;
  int s,n;
  cin>>s>>n;
  int arr[n][2];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i][0]>>arr[i][1];
    st.insert({arr[i][0],arr[i][1]});
  }
  while(!st.empty())
  {
   auto b=*st.begin();
   if(b.first<s)
   {
    s=s+b.second; st.erase(st.begin());
   }
   else{
    break;
   }
  }
  if(!st.empty())cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
    return 0;
}