#include<bits/stdc++.h>
using namespace std; 
typedef long long ll;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector <ll> a(n);
        map <ll,ll> mp;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            ans+=mp[a[i]-i];
            mp[a[i]-i]++;
        }
        cout << ans << '\n';
    }
    return 0;
}