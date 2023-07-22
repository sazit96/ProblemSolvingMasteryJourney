#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int>a(n); for(int i=0;i<n;i++) cin >> a[i];
        vector<int>dff(n);
        dff[0]=abs(a[1]-a[0]);
        dff[n-1]=abs(a[n-1]-a[n-2]);
        for(int i=1;i<=n-2;i++)
         dff[i]=max(abs(a[i+1]-a[i]),abs(a[i]-a[i-1]));
        int ans=*min_element(dff.begin(),dff.end());
        cout << ans << "\n";
    }
    return 0;
}