//https://codeforces.com/contest/1249/problem/A
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int q ; cin >> q; 
    while (q--)
    {
        int n; cin >> n;
        vector <int> a(n); for(int i=0;i<n;i++) cin >> a[i];
        sort (a.begin(),a.end());
        int ans=1;
        for(int i=0;i<n-1;i++)
         if(a[i+1]==a[i]+1) ans=2;
        cout << ans << "\n";
    }
    return 0;
}