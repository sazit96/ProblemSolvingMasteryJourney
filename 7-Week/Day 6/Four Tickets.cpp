//https://www.codechef.com/problems/FOURTICKETS
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int x; cin >>x;
        if(x*4>1000) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}