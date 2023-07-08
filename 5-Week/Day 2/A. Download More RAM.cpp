//https://codeforces.com/contest/1629/problem/A
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,k; cin >> n >> k;
        vector <int> a(n); for(int i=0;i<n;i++) cin >> a[i];
        vector <int> b(n); for(int i=0;i<n;i++) cin >> b[i];
        vector <pair <int,int>> ab(n);
        for(int i=0;i<n;i++) ab[i]={a[i],b[i]};
        sort (ab.begin(),ab.end());
        for(int i=0;i<n;i++) if(ab[i].first<=k) k+=ab[i].second;
        cout << k << "\n";
    }
    return 0;
}