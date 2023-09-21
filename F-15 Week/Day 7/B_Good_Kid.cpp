#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int> a(n);
        for(int i=0;i<n; i++) cin >> a[i];
        sort (a.begin(),a.end());
        a.front()++; int ans=1;
        for(auto i : a) ans *=i;
        cout << ans << "\n";
    }
    return 0;
}