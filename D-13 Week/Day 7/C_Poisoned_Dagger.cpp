#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll n,h; cin >> n >> h; 
        vector<ll>a(n); for(int i=0;i<n;i++) cin >> a[i];
        ll low=0,high=1e18;
        while(low<=high)
        {
            ll mid=(low+high)/2;
            ll sum=mid;
            for(int i=0;i<n-1;i++)
             sum+=min(mid,a[i+1]-a[i]);
            if(sum<h) low=mid+1;
            else high=mid-1;
        }
        cout << high+1 << "\n";
    }
    return 0;
}