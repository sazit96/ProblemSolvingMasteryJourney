#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,k,a,b; cin >> n >> k >> a >> b;
        vector<pair<ll,ll>>ar(n);
        for(int i=0; i<n; i++)
         cin >> ar[i].first >> ar[i].second;
        a--; b--;
        ll ans = abs(ar[a].first-ar[b].first) + abs(ar[a].second-ar[b].second);
        ll minOne=4000000001;
        ll minTwo=4000000001;
        for(int i=0; i<k; i++)
        {
            minOne = min(minOne,abs(ar[a].first-ar[i].first) + abs(ar[a].second-ar[i].second));
            minTwo = min(minTwo,abs(ar[b].first-ar[i].first) + abs(ar[b].second-ar[i].second));
        }
        ans = min(ans,minOne+minTwo);
        cout << ans << "\n";
    }
    return 0;
}