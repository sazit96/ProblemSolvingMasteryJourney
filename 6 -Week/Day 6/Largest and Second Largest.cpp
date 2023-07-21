//https://www.codechef.com/problems/LARGESECOND?tab=statement
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        vector<int>a(n); for(int i=0;i<n;i++) cin >> a[i];
        sort (a.begin(),a.end());
        a.erase(unique(a.begin(), a.end()), a.end());
        int maximum = a[a.size()-1] + a[a.size()-2];
        cout << maximum << "\n";
    }
    return 0;
}
