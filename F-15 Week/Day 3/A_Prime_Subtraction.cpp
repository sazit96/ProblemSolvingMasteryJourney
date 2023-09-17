#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll x,y; cin >> x >> y;
        if(x==y+1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}