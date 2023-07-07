//https://codeforces.com/contest/1611/problem/A
#include<bits/stdc++.h> 
using namespace std;
bool anyEven(string n)
{
    for(auto &ch :n) 
     if(ch % 2 == 0) return true;
    return false;
} 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        string n; cin >> n;
        if(n.back() % 2 == 0) cout << 0 << "\n";
        else if(n.front() % 2 ==0) cout <<  1 << "\n";
        else if(anyEven(n)) cout << 2 << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}