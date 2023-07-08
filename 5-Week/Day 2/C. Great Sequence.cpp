//https://codeforces.com/contest/1642/problem/C
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,x; cin >> n >> x;
        vector <long long> a(n); for(int i=0;i<n;i++) cin >> a[i];
        sort (a.begin(),a.end());
        map <long long ,long long> mp;
        for(int i=0;i<n;i++) mp[a[i]]++;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if (mp[a[i]] >= 1)
            {
                mp[a[i]]--;
                if(mp[a[i]*x] >= 1) mp[a[i]*x]--;
                else ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}