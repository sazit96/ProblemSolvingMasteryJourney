#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >>t; 
    while (t--)
    {
        int n; cin >> n;
        vector<int>a(n); for(int i=0;i<n;i++) cin >> a[i];
        int mx=*max_element(a.begin(),a.end());
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if (a[i] == mx && (i > 0 && a[i - 1] != mx || i < n - 1 && a[i + 1] != mx)) {
            ans = i + 1;
            break;
        }
        }
        cout << ans << "\n";
    }
    return 0;
}