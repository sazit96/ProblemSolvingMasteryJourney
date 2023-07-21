#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        ll n ,k; cin >> n >> k;
        ll ans=1;
        for(int i=0;i<n;i++)
        {
            ans=(ans*k)%1000000007;
            if(k>=2) k--;
        }
        cout << ans << "\n";
    }
    return 0;
}