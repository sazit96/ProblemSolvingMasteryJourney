//https://www.codechef.com/problems/PARLIAMENT?tab=statement
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,x; cin >> n >> x; 
        if(x>=(n+1)/2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}