//https://codeforces.com/contest/1472/problem/B
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        vector<int>a(n); for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end(),greater<int>());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(ans<=0) ans+=a[i];
            else ans-=a[i];
        }
        cout << (ans==0 ? "YES\n" : "NO\n") << "\n";
    }
    return 0;
}