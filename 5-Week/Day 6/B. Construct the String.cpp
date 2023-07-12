//https://codeforces.com/contest/1335/problem/B
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,a,b; cin >> n >> a >> b; 
        string s; 
        for(int i=0;i<a; i++) s+='a'+i%b;
        for(int i=0;i<n;i++) cout << s[i%a];
        cout << "\n";
    }
    return 0;
}