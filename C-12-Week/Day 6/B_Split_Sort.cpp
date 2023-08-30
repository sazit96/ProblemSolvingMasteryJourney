#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int> a(n+1); 
        for(int i=0;i<n;i++)
        {
            int p; cin >> p;
            a[p]=i;
        }
        int ans=0;
        for(int i=1;i<n;i++)
        {
            if(a[i] > a[i+1]) ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}