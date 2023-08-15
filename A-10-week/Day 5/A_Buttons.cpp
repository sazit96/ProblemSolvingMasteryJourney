#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int a,b,c; cin >> a >> b >> c; 
        if(c&1)a++;
        a+=c/2; b+=c/2;
        if(a>b) cout << "First\n";
        else cout << "Second\n";
    }
    return 0;
}