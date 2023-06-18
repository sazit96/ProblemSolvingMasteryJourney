//https://codeforces.com/contest/1676/problem/C
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,m; cin >> n >> m;
        vector<string>s(n);
        int ans=1e9;
        for(int i=0;i<n;i++)
        {
          cin >> s[i];
          for(int j=0;j<i;j++)
          {
            int tmp=0;
            for(int k=0;k<m;k++)
            {
                tmp+=abs(s[i][k]-s[j][k]);
            }
            ans=min(ans,tmp);
          }
        }
        cout << ans << "\n";
    }
}