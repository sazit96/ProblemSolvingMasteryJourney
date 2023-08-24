#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll binarySearch(ll n) 
{
    ll low = 1, high = 10000000000, mid, ans = 1;
    while (low <= high) {
        mid = (low + high) / 2;
        ll l = mid * (mid - 1) / 2;
        if (l == n) return mid;
        if (l < n) {
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = binarySearch(n);
        ll cc = ans * (ans - 1) / 2;
        cc = n - cc;
        ans += cc;
        cout << ans << "\n";
    }
    return 0;
}
