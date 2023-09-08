#include<bits/stdc++.h>
using namespace std; 
using ll = long long ;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll n,k; cin >> n >> k; 
        ll l=0,r=k*2;
        while(l<=r)
        {
            ll mid= (l+r)/2;
            if(mid-mid/n<k) l=mid+1;
            else r=mid-1;
        }
        cout  << l << "\n";
    }
    return 0;
}