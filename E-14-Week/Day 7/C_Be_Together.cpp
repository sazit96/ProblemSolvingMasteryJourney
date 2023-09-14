#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int n; cin >> n;
    vector <int> a(n); for(int i=0; i<n; i++) cin >> a[i];
    ll ans=INT_MAX;
    for(int i=-100; i<=100; i++)
    {
        ll sum=0;
        for(int j=0; j<n; j++) 
         sum+=(i-a[j])*(i-a[j]);
        ans=min(ans,sum);
    }
    cout << ans << "\n";
    return 0;
}