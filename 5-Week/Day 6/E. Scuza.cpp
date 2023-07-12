//https://codeforces.com/contest/1742/problem/E
#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
#define vi vector<long long>
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,q; cin >> n >> q;
        vi a(n+1),pref(n+1),maxi(n+1);
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            pref[i]+=pref[i-1]+a[i];
            maxi[i]=max(maxi[i-1],a[i]);
        }
        ll ans=0;
        for(int i=0;i<q;i++)
        {
            ll x; cin >> x;
            int k=upper_bound(maxi.begin(),maxi.end(),x)-maxi.begin()-1;
            if(k>=0) ans= pref[k];
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}
