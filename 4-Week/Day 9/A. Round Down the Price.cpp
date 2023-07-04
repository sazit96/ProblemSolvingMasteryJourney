//https://codeforces.com/contest/1702/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t; 
    while (t--)
    {
        int m; cin >> m;
        int ans=m-1;
        for(int i=1;i<=m;i*=10) ans= min(ans, m-i);
        cout << ans << "\n";
    }
    return 0;
}