//https://codeforces.com/contest/1800/problem/B
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,k; cin >> n >> k;
        string s; cin >> s; 
        vector <int> l(26),u(26);
        for(int i=0;i<n;i++)
        {
            if(islower(s[i])) l[s[i]-'a']++;
            else u[s[i]-'A']++;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int m=min(l[i],u[i]);
            ans+=m;
            int diff=abs(l[i]-u[i]);
            int ops=min(diff/2,k);
            ans+=ops;
            k-=ops;
        }
        cout << ans << "\n";
    }
    return 0;
}