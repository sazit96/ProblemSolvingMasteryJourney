#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> diff(n);
        for (int i = 0; i < n; i++) cin >> diff[i];
        ll mx = 1;
        ll curr = 1;
        for (int i = 1; i < n; i++) 
        {
            if (abs(diff[i] - diff[i - 1]) <= k) curr++;
            else {
                mx = max(mx, curr);
                curr = 1;
            }
        }
        sort(diff.begin(), diff.end());
        curr = 1;
        for (int i = 1; i < n; i++) 
        {
            if (diff[i] - diff[i - 1] <= k) curr++;
             else {
                mx = max(mx, curr);
                curr = 1;
            }
        }
        mx = max(mx, curr);
        cout << n - mx << "\n";
    }
    return 0;
}
