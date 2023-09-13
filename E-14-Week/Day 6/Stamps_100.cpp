#include<bits/stdc++.h>
using namespace std; 
using ll = long long; 
void test_case()
{
    ll n,pos= -1;
    string s; cin >> n >> s; 
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            pos=i;break;
        }
    }
    if(pos==-1 || pos ==(n-1) || pos== (n-2)) cout << s << "\n";
    else
    {
        for(ll i=0;i<pos;i++) cout << 0;
        cout << 1;
        for(ll i=pos+1; i<n;i++) cout << 0;
        cout << "\n";
    }
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        test_case();
    }
    return 0;
}