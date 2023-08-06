#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n; 
        if(n>1 && n%2!=0) cout << "-1\n";
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i%2) cout << i << " ";
                else cout << n-i << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}