//https://vjudge.net/contest/568191#problem/C
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while(t--)
    {
        int L,v,l,r; 
        cin >> L >> v >> l >> r;
        int ans=L/v-r/v+(l-1)/v;
        cout << ans << "\n";
    }
    return 0;
}