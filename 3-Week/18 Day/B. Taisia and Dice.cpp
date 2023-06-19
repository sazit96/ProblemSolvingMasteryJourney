//https://codeforces.com/contest/1790/problem/B
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,s,r; cin >> n >> s >> r;
        int mx=s-r;
        r-=(n-1);
        cout << mx << ' ';
        for(int i=1;i<n;i++)
        {
            int t=min(mx-1,r);
            cout << t+1 << ' ';
            r-=t;
        }
        cout << '\n';
    }
    return 0;
}