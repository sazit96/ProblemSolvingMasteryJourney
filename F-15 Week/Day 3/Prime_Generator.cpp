#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
bool isprime(int n)
{
    if(n<2) return false;
    if(n==2) return true; 
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0) return false;
    }
    return true; 
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll m,n; cin >> m >> n;
        for(int i=m;i<=n;i++)
        {
            if(isprime(i))
             cout << i << "\n";
        }
        cout << "\n";
    }
    return 0;
}