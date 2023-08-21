#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
bool ispalindrome(ll num)
{
    ll original = num;
    ll reversed=0;
    while(num>0)
    {
        reversed = reversed *10 + num %10;
        num/=10;
    }
    return original == reversed;
}
int main ()
{
    int n; cin >> n;
    while (n--)
    {
        ll p; cin >> p;
        int count=0;
        while(!ispalindrome(p))
        {
            count ++;
            ll reversed =0;
            ll tmp=p;
            while(tmp > 0)
            {
                reversed = reversed *10 + tmp %10;
                tmp/=10;
            }
            p+=reversed;
        }
        cout << count << " " << p << "\n";
    }
    return 0;
}