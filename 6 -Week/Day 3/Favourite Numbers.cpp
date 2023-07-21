//https://www.codechef.com/problems/FAVOURITENUM
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while(t--)
    {
        int a; cin >>a;
        if(a%2==0 && a%7==0 ) cout << "Alice\n";
        else if(a%2!=0 && a%9==0) cout << "Bob\n";
        else cout << "Charlie\n";
    }
    return 0;
}