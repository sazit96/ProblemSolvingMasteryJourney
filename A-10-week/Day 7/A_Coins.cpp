#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll n,k; cin >> n >> k;
        if(n%2==0 || (k%2==1 && n>=k) ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}