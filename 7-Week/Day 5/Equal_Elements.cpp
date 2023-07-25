#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int>a(n),ans(n+1);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            ans[a[i]]++;
        }
        sort (ans.begin(),ans.end());
        cout << n-ans[n] << "\n";
    }
    return 0;
}