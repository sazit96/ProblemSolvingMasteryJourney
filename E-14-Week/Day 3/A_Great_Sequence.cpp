#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
void test_case()
{
    ll n,x; cin >> n >> x; 
    multiset<ll>ms;
    for(int i=0;i<n;i++)
    {
        int a; cin >> a;
        ms.insert(a);
    }
    ll ans=0;
    while(!ms.empty())
    {
        ll t=*ms.begin();
        ll malX=(ll)t*x;
        ms.erase(ms.begin());
        if(ms.find(malX) != ms.end()) 
         ms.erase(ms.find(malX));
        else ans++;
    }
    cout << ans << "\n";
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        test_case();
    }
    return 0;
}