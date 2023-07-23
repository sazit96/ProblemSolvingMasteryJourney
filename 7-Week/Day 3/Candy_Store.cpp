#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int x,y; cin >> x >> y;
        int count=0;
        if(x>=y) count=y;
        else count = x+(y-x)*2;
        cout << count << "\n";
    }
    return 0;
}