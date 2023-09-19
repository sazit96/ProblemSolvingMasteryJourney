#include<bits/stdc++.h>
using namespace std; 
int getDivBig(int n)
{
    int ans = 0;
    for(int i=1; i*i<=n; i++)
    {
        if(i*i == n) ans+=1;
        else if(n%i == 0) ans+=2;
    }
    return ans;
}
int gcd(int a, int b)
{
    return b==0 ? a : gcd(b, a%b);
}
void TEST_CASEs()
{
    int a,b; cin >> a >> b; 
    int Gcd=gcd(a,b);
    cout << getDivBig(Gcd) << "\n";
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--)
    {
        TEST_CASEs();
    }
    return 0;
}