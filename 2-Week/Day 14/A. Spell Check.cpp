//https://codeforces.com/contest/1722/problem/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        string name="Timur";
        sort(name.begin(),name.end());
        sort(s.begin(),s.end());
        if(s==name) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
