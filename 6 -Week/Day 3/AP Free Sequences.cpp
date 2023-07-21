//https://www.codechef.com/problems/THREEAPFREE?tab=statement
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        vector <int> a(n); for(int i=0;i<n;i++) cin >> a[i];
        bool found = true;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if((a[j]-a[i])==(a[k]-a[j])) found=false;
                }
            }
        }
        if(found) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}