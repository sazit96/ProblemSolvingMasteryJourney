//https://codeforces.com/contest/1703/problem/A
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >>t;
    while (t--)
    {
        string s; cin >> s;
        for(int i=0;i<3;i++) s[i]=toupper(s[i]);
        if(s=="YES") cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}