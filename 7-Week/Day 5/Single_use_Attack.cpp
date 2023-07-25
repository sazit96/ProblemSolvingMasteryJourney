#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int h,x,y; cin >> h >> x >> y;
        int sp=h-y;
        int nor=sp%x;
        if(nor==0) cout << 1+sp/x << "\n";
        else cout << 2+sp/x << "\n";
    }
    return 0;
}