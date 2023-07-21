//https://www.codechef.com/problems/PARKINGCHARG?tab=statement
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int x,y,h; cin >> x >> y >> h;
    int after_H=(h-1);
    int ans=(after_H*y)+x;
    cout << ans <<"\n";
    return 0;
}