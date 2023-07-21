//https://www.codechef.com/problems/RCT?tab=statement
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int w,l; cin >> w >> l;
        if(w%2==0 || l%2==0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}