#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n; 
        vector<ll>a(n); for(int i=0;i<n;i++) cin >> a[i];
        ll ans=0;
        for(int i=0;i<n;i++)
        {
           for(int j=i+1;j<n;j++)
            ans+=a[i]*a[j];
        }
        cout << ans << "\n";
    }
    return 0;
}