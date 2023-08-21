#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n; 
        for(int i=1;i<=n+1;i++)
        {
            if(n%i!=0)
            {
                cout << i-1 << "\n";
                break;
            }
        }
    }
    return 0;
}