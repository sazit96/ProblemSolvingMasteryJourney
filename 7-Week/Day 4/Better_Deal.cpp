#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int  a,b; cin >> a >> b;
        a=100-100*a/100; b=200-200*b/100;
        if(a < b) cout << "FIRST\n";
        else if (a > b) cout << "SECOND\n";
        else cout << "BOTH\n";
    }
    return 0;
}