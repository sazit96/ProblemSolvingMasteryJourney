#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int  n,k; cin >> n >> k;
        int r=n,l=1;
        for(int i=0;i<n;i++)
        {
            if(i&1) cout << l++ << " ";
            else cout << r-- << " ";
        }
        cout << "\n";
    }
    return 0;
}