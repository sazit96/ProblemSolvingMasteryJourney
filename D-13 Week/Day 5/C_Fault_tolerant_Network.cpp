#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
const ll x =100000000000;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<ll> a(n),b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        ll a1= x , a2= x , b1=x , b2=x;
        for(int i=0;i<n;i++)
        {
            a1=min(a1,abs(a[0]-b[i]));
            a2=min(a2,abs(a[n-1]-b[i]));
            b1=min(b1,abs(b[0]-a[i]));
            b2=min(b2,abs(b[n-1]-a[i]));
        }
        ll ans= x;
        ans = min(ans,abs(a[0]-b[0]) + abs(a[n-1]-b[n-1]));
        ans = min(ans,abs(a[0]-b[n-1]) + abs(a[n-1]-b[0]));
        ans = min(ans,abs(a[0]-b[0])+a2+b2);
        ans = min(ans,abs(a[0]-b[n-1])+a2+b1);
        ans = min(ans,abs(a[n-1]-b[0])+a1+b2);
        ans = min(ans,abs(a[n-1]-b[n-1])+a1+b1);
        ans = min(ans,a1+a2+b1+b2);
        cout << ans <<"\n";
    }
    return 0;
}