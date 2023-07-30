#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t; cin >> t;
    while (t--) 
    {
        int n; cin >> n;
        int ans=1e9;
        vector<int> a(n); for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n-1;i++)
        {
            ans=min(a[i+1] - a[i],ans);
        }
        if (ans < 0) cout << "0\n";
        else cout << ans / 2+1 << "\n";
    }
    return 0;
}