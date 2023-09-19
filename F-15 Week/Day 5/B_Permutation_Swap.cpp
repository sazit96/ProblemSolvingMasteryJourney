#include<bits/stdc++.h>
using namespace std; 
void TEST_CASE()
{
    int n; cin >> n; 
    vector <int> a(n+1);
    int ans=0;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) ans=__gcd(ans,abs(a[i]-i));
    cout << ans << "\n";
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        TEST_CASE();
    }
    return 0;
}