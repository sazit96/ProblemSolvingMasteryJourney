#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s; 
        int n=s.size();
        if(n%2==1) cout << "NO\n";
        else 
        {
            if(s.substr(0,n/2)==s.substr(n/2)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}