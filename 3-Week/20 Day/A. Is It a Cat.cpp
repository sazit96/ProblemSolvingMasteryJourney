//https://codeforces.com/contest/1800/problem/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n; 
        string s; cin >> s; 
        for(char &c : s) c=tolower(c);
        s.erase(unique(s.begin(),s.end()),s.end());
        if(s=="meow") cout<<"YES\n";
        else cout << "NO\n";
    }  
    return 0;
}
