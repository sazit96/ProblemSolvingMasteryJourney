//https://www.codechef.com/problems/ONEFULPAIRS
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int a,b; cin >> a >> b;
    if(a+b+(a*b)==111) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}