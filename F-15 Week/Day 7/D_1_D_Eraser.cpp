#include<bits/stdc++.h>
using namespace std; 
using ll = long long; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll n,k; cin >> n >> k; 
        string s; cin >> s; 
        ll ans =0;
        for (int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                ans++;
                i+=k-1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}