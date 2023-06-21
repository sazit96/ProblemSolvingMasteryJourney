#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n; 
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int l=0,r=n-1;
        int alice=0,bob=0,ans=0;
        while (l<=r)
        {
           if(alice<bob)
           {
            alice+=a[l];
            l++;
           }
           else
           {
            bob+=a[r];
            r--;
           }
           if(alice==bob)
             ans=(l-1)+(n-r);
        }
        cout << ans << "\n";
    }
    return 0;
}