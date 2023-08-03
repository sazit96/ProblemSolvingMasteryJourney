#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector <int> a(n);
        int sumE=0,sumO=0; 
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]%2==0) sumE+=a[i];
            else sumO+=a[i];
        }
        if(sumE > sumO) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}