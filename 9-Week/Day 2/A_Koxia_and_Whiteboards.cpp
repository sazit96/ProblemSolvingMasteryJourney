#include<bits/stdc++.h>
using namespace std; 
using ll=long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,m; cin >> n >> m;
        vector<ll>a(n+m); for(int i=0; i<n+m; i++) cin >> a[i];
        sort(a.begin(),a.end()-1);
        reverse(a.begin(),a.end());
		ll ans=0;
        for(int i=0;i<n;i++) ans+=a[i];
        cout << ans << "\n";
    }
    return 0;
}