#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        int ans=0;
        if(n%2==0) cout << "YES\n";
        else 
        {
            for(int i=1; i<n; i++)
            {
                if(a[i] <= a[i-1])
                {
                    ans=1;
                    break;
                }
            }
            if(ans==1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}