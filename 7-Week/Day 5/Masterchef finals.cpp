//https://www.codechef.com/problems/TOP10
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n;
        if(n<=10) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}