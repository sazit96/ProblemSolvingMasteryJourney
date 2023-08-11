#include<bits/stdc++.h>
using namespace std; 
using ll=long long;
int sum(ll n)
{
    int res=0;
    while(n)
    {
        res+=n%10;
        n/=10;
    }
    return res;
}
int main ()
{
    ll n,k; cin >> n >> k; 
    ll l=1,r=n+1;
    while (l<r)
    {
        ll m=(l+r)/2;
        if(m-sum(m)<k) l=m+1;
        else r=m;
    }
    cout << n+1-(l+r)/2 << "\n";
    return 0;
}