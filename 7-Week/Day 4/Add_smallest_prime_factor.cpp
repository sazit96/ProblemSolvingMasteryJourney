#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int x, y; cin >> x >> y;
        int t=x%2;
        if(x==3 || x==9) x+=3;
        else if(x==5) x+=5;
        else if(x==7) x+=7;
        x=min(x,y);
        cout << (y-x+1)/2+t << "\n";
    }
    return 0;
}
