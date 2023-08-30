#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,a,b; cin >> n >> a >> b; 
        if(a==n && b==n || a+b < n-1) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}