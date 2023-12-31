//https://codeforces.com/contest/1722/problem/D
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >>n;
        string s; cin >> s;
        long long ans=0;
        vector<long long>v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                v.push_back((n-1-i)-i);
                ans+=i;
            }
            else
            {
                v.push_back(i-(n-1-i));
                ans+=n-1-i;
            }
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<n;i++)
        {
            if(v[i]>0) ans+=v[i];
            cout << ans << ' ';
        }
        cout << '\n';
    }
}