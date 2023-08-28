#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int n; cin >>n;
    vector <int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    int mx=a.back();
    int z=0;
    for(int i=0; i<n; i++) z=__gcd(z,mx-a[i]);
    ll y=0;
    for(int i=0; i<n; i++) y+=(mx-a[i])/z;
    cout << y << " " << z << "\n";
    return 0;
}