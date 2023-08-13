#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll a,b,c; cin >> a >> b >> c;
        ll sum=a + b*2 + c*3;
        cout << sum%2 << "\n";
    }
    return 0;
}