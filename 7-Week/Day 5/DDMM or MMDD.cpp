//https://www.codechef.com/problems/DDMMORMMDD?tab=statement
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        string s; cin >> s;
        int day = stoi (s.substr(0, 2));
        int month = stoi(s.substr(3, 2));
        if(month<=12 && day <=12) cout << "BOTH\n";
        else if(month>12 && day <=12) cout << "MM/DD/YYYY\n";
        else cout << "DD/MM/YYYY\n";
    }
    return 0;
}