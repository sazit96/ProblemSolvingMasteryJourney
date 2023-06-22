//https://codeforces.com/contest/1744/problem/A
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >>  t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        string s; cin >> s; 
        bool ok=true;
        for(int i=0;i<n;i++)
        {
         for(int j=i+1;j<n;j++)
           if(a[i]==a[j]&&s[i]!=s[j]) ok=false;
        }
        if(ok) cout <<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}