#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int x,y,r; cin >> x >> y >> r;
        int extra=r/30;
        int total_stick=x+extra;
        int ans=total_stick/y;
        if((total_stick%y)!=0) cout << ans+1 << "\n";
        else cout << ans << "\n";
    }
    return 0;
}