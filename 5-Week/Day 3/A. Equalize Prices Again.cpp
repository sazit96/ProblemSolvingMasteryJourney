//https://codeforces.com/contest/1234/problem/A
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int q; cin >> q; 
    while (q--)
    {
        int n; cin >> n;
        vector <int> a(n); for(int i=0;i<n;i++) cin >> a[i];
        long long sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        ans=(sum+n-1)/n;
        cout << ans << "\n";
    }
}