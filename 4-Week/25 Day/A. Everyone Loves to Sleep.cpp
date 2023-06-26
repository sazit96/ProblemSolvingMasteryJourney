//https://codeforces.com/contest/1714/problem/A
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,h,m; cin >> n >> h >> m;
        int sleep=60 * h + m;
        int ans= INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin >> h >> m;
            int alarm= 60 * h + m;
            ans=min(ans,(alarm+1440-sleep)%1440);
        }
        cout<< ans/60 << " " << ans%60 << "\n";
    }
    return 0;
}