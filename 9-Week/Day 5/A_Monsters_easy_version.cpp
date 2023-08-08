#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector < ll > a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        ll spellCount=0,cur_count=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==cur_count) continue;
            spellCount+=a[i]-1-cur_count;
            cur_count++;
        }
        cout << spellCount << "\n";
    }
    return 0;
}