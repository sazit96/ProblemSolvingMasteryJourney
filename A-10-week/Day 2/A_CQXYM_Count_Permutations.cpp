#include<bits/stdc++.h>
using namespace std; 
using ll =long long;
const int mod=1e9+7;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        n*=2;
        ll cnt=1;
        for(int i=3;i<=n;i++) cnt=cnt*i%mod;
        cout << (cnt)% mod << "\n";
    }
    return 0;
}