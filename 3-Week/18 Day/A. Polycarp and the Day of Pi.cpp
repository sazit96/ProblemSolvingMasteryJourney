//https://codeforces.com/contest/1790/problem/A

#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        string n; cin >> n;
        int count=0;
        string pi="314159265358979323846264338327";
        for(int i=0;i<n.size();i++)
        {
            if(n[i] == pi[i]) count++;
            else break;
        }
        cout << count <<"\n";
    }
    return 0;
}