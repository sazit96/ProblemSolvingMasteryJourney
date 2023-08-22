#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,m,k; cin >> n >> m >> k;
        int x,y; cin >> x >> y;
        bool vika=false;
        for(int i=0; i<k; i++)
        {
            int a,b; cin >> a >> b;
            if((x+y+a+b)%2==0) vika=true;
        }
        if(!vika) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}