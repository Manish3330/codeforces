#include<bits/stdc++.h>
using namespace std;
vector<int> repeatedNumber(const vector<int> &A) {
   vector<int>res;
   vector<int>Ai=A;
   int a=0;
   int b=0;
   int n=A.size();
   for(int i=0;i<A.size();i++)
   {
       int index=abs(Ai[i])-1;
       if(Ai[index]>0)Ai[index]=-Ai[index];
       else
       {
           a=abs(Ai[i]);
           break;
       }
   }
   
   long long int diff=0;
   for(int i=0;i<n;i++)
   {
       diff +=A[i]-(i+1);
   }
   b=a-diff;
   res.push_back(a);
   res.push_back(b);
    return res;
}

int main()
{
    vector<int>A;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {  int a;
       cin>>a;
       A.push_back(a);
    }
    vector<int>res = repeatedNumber(A);
    cout<<res[0]<<" "<<res[1];
//     unordered_map<char,int>ma;
//     string s;
//     cin>>s;
//     for(int i=0;i<s.size();i++)
//     {
//        ma[s[i]]++;
//     }
//     int ans=0;
//    for(auto a:ma)
//    {
//     int b= a.second;
//     if(b%2!=0)ans++;
//    }
//    if(ans>1 && ans%2 ==0)
//    {
//     cout<<"Second";
//    }
//    else
//    {
//     cout<<"First";
//    }
     

    return 0;
}