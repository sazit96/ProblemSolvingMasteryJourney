//https://www.codechef.com/START95D/problems/DONDRIVE
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,x; cin >> n >> x; 
        int remaining =n-x;
        cout << remaining << "\n";
    }
    return 0;
}