
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        vector <int> a(n); for(int i=0;i<n;i++) cin >> a[i];
        int ans=INT_MAX;
        for(int i=1;i<n-1;i++)
        {
            int curMax=0;
            if(i-1>=0) curMax=max(curMax,abs(a[i]-a[i-1]));
            if(i+1<n) curMax=max(curMax,abs(a[i]-a[i+1]));
            ans=min(ans,curMax);
        }
        cout << ans << "\n";
    }
}