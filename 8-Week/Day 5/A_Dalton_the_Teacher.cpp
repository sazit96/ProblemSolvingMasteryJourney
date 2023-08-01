#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector <int> a(n);
        int count =0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            count+=(a[i]==i+1);
        }
        cout << (count+1)/2 << "\n";
    }
    return 0;
}