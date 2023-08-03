#include<bits/stdc++.h>
using namespace std; 
using ll=long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<ll>a(n);
        ll nega=0,ans=0,mini=LLONG_MAX;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]<0) nega++;
            ans+=abs(a[i]);
            mini=min(mini,abs(a[i]));
        }
        if(nega%2!=0) ans-=(2*mini);
        cout << ans << "\n";
    }
    return 0;
}