#include<bits/stdc++.h>
using namespace std; 
//https://www.codechef.com/problems/CRICMATCH
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,m;  cin >> n >> m;
        int ball = m*6;
        int ran=ball*6;
        if(ran>=n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}