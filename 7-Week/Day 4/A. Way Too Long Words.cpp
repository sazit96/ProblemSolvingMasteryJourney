//https://codeforces.com/problemset/problem/71/A
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n; cin >>n;
    for(int i=0;i<n;i++)
    {
        string s; cin >>s; 
        if(s.size()<=10) cout << s << "\n";
        else cout << s[0] << int(s.size()) -2 << s.back() << "\n";
    }
    return 0;
}