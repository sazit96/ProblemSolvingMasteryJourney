//https://codeforces.com/contest/1674/problem/B
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        string s; cin >> s;
        int ans=0;
        int a=s[0]-'a';
        int b=s[1]-'a';
        if(a>b) b++;
        ans=a*25+b;
        cout << ans << "\n";
    }
}