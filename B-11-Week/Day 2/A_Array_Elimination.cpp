#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector <int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        vector <int> cnt(30);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<30;j++)
            {
                if(a[i] & (1 << j)) cnt[j]++;
            }
        }
        int g=0;
        for(int i: cnt) g=__gcd(g,i);
        if(g==0)
        {
            for(int i=1;i<=n;i++) cout << i << " ";
        }
        else 
        {
            for(int i=1;i<=g;i++) 
            {
                if(g%i==0) cout << i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}