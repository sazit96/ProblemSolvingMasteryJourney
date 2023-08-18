#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
const ll mod = (ll)1e9 + 7;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll n,k; cin >> n >> k;
        int ans=1;
        while(k--) ans=(ans * n) % mod;
        cout << ans << "\n";
    }
    return 0;
}