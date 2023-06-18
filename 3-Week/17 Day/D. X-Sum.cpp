//https://codeforces.com/contest/1676/problem/D

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,m; cin >> n >> m; 
        int a[n][m];
        map<int,int>mpA,mpB;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++)
        {
          cin >> a[i][j];
          mpA[i+j]+=a[i][j];
          mpB[i-j]+=a[i][j];
        }
        int ans=0;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++)
          ans=max(ans,mpA[i+j]+mpB[i-j]-a[i][j]);
        cout << ans << "\n";
    }
    return 0;
}