//https://www.codechef.com/problems/MONOPOLY2?tab=submissions
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t; 
    while(t--)
    {
        int p,q,r,s; cin >> p >> q >> r >> s;
        if(p+q+r<s) cout << "YES\n";
        else if(p+q+s<r) cout << "YES\n";
        else if(p+s+r<q) cout << "YES\n";
        else if(s+r+q<p) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}