#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector <int> a(n); for(int i=0; i<n; i++) cin >> a[i];
        int x=a[n-1],k=0;
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]>x)
            {
                x=a[i];
                k++;
            }
        }
        cout << k << "\n";
    }
    return 0;
}