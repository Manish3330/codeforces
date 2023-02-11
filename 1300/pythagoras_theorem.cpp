#include<bits/stdc++.h>
using namespace std;
int main()
{    int n;
    while(cin >> n) {
        int res = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = i; j <= n; j++) {
                if(i*i + j*j > n * n) break;
                
                int tmp = sqrt(i*i + j*j);
               
                if(i*i + j*j == tmp*tmp && tmp >= j) res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}