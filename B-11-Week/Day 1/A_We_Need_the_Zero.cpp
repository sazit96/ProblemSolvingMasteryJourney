#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int>a(n); for(int i=0;i<n;i++) cin >> a[i];
        int x=0;
        for(int i=0;i<n;i++)
        {
          x^=a[i];
        }
        if(n%2==0)
        {
          if(x) cout << "-1\n";
          else cout << x << "\n";
        }
        else cout << x <<"\n";
    }
    return 0;
}