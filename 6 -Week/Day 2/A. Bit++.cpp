//https://codeforces.com/contest/282/problem/A
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin >> n;
    string s; int x=0;
    for(int i=0;i<n;i++)
    {
        cin >> s; 
        if(s[1]=='+') x++;
        else x--;
    }
    cout << x << "\n";
    return 0;
}