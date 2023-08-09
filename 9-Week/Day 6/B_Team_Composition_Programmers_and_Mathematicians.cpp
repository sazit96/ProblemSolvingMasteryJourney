#include<bits/stdc++.h>
using namespace std; 
using ll =long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll a,b; cin >> a >> b; 
        ll ans=min(min(a,b),(a+b)/4);
        cout << ans << "\n";
    }
    return 0;
}