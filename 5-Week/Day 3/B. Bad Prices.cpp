//https://codeforces.com/contest/1213/problem/B
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        vector <int> a(n); for(int i=0;i<n;i++) cin >> a[i];
        int BadDay=0;
        int Minprice=a[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>Minprice) BadDay++;
            else Minprice=a[i];
        }
        cout << BadDay << "\n";
    }
    return 0;
}