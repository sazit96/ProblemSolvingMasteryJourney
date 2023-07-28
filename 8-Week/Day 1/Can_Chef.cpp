#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int x,y; cin >> x >> y;
        int petrol = x*15; int totalkilo= y*2;
        if(petrol>=totalkilo) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}