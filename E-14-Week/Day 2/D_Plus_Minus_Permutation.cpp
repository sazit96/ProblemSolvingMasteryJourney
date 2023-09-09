#include<bits/stdc++.h>
using namespace std; 
using ll= long long;
ll lcm(ll x, ll y)
{
    return (x*y)/__gcd(x,y);
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll n,x,y; cin >> n >> x >> y; 
        ll xd=n/x;
        ll yd=n/y;
        ll xyD=n/lcm(x,y);
        xd-=xyD; yd-=xyD;
        ll ans=0;
        ans+=(n+n-(xd-1)) *xd/2;
        ans-=(yd+1) *yd/2;
        cout << ans << "\n";
    }
    return 0;
}