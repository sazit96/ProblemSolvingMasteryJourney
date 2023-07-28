#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,a,b; cin >> n >> a >> b;
        int divi=n/2;
        if(n%2==0) cout << divi*a+divi*b << "\n";
        else cout << divi*a+divi*b+b << "\n";
    }
    return 0;
}