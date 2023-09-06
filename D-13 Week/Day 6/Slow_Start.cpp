#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int x,h; cin >> x >> h; 
        int turn =0;
        int damage=x/2;
        while(h>0)
        {
            h-=damage;
            turn++;
            if(turn==5) damage =x; 
        }
        cout << turn << "\n";
    }
    return 0;
}