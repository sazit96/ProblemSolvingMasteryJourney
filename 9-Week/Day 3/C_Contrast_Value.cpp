#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int>a(n); for(int i=0;i<n;i++) cin >> a[i];
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            if(!b.empty() && b.back()==a[i]) continue;
            else b.push_back(a[i]);
        }
        int ans=b.size();
        for(int i=1; i<b.size()-1; i++)
        {
            if((b[i-1]<=b[i]) == (b[i]<=b[i+1])) ans--;
        }
        cout << ans << "\n";
    }
    return 0;
}