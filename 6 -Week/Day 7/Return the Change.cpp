#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int x; cin >>x; 
        if(x%10==0) cout << 100-x << "\n";
        else cout << 100 - (x+5)/10 * 10 << "\n";
    }
    return 0;
}