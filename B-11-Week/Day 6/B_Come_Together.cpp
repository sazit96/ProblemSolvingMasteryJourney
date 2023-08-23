#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int xa,ya; cin >> xa >> ya; 
        int xb,yb; cin >> xb >> yb;
        int xc,yc; cin >> xc >> yc;
        int ans=1;
        ans+=max(min(xb,xc)-xa,0);
        ans+=max(xa-max(xb,xc),0);
        ans+=max(min(yb,yc)-ya,0);
        ans+=max(ya-max(yb,yc),0);
        cout << ans << "\n";
    }
    return 0;
}