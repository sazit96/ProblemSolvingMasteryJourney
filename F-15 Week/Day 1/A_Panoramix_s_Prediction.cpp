#include<bits/stdc++.h>
using namespace std; 
bool isPrime(int n)
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main ()
{
    int n,m,i; cin >> n >> m;
    for(i=n+1;;i++)
    {
        if(isPrime(i)) break;
    }
    if(isPrime(n) && i==m) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}