#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int x=0,y=0; bool yes=false;
        for(auto c : s)
        {
            if(c=='U') y++;
            if(c=='R') x++;
            if(c=='D') y--;
            if(c=='L') x--;
            if(x==1 && y==1){
                yes=true;
            }
        }
        if(yes) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}