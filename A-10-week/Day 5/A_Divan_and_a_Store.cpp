#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll n,l,r,k; cin >> n >> l >> r >> k;
        vector <int> a(n); for(int i=0;i<n;i++) cin >> a[i];
        ll ans=0,cnt=0;
        sort(a.begin(),a.end());
        for(int i=0; i<n; i++)
        {
            if(a[i]<=r && a[i]>=l)
            {
                if((ans+=a[i])<=k) cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}