//https://codeforces.com/contest/1690/problem/B
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        vector<int>b(n);
        for(int i=0;i<n;i++) cin >>b[i];
        int mx=0;
        for(int i=0;i<n;i++) mx=max(mx,a[i]-b[i]);
        bool ok =true;
        for(int i=0;i<n;i++){
            if(b[i]!=max(a[i]-mx,0)) ok=false;
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}