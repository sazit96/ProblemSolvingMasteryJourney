//https://codeforces.com/contest/1692/problem/A
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    while(t--)
    {
        int a,b,c,d; cin >> a >> b >> c >> d;
        int count=(a<b)+(a<c)+(a<d);
        cout<<count <<endl;
    }
    return 0;
}