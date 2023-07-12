//https://www.codechef.com/START98D/problems/AIRM
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >>t; 
    while(t--)
    {
        int n; cin >>n;
        vector<int>a(n),b(n);
        map<int,int>mp;
        for(auto &i :a)
        {
            cin >> i;
            mp[i]++;
        }
        for(auto &i :b)
        {
            cin >> i;
            mp[i]++;
        }
        int ans=0;
        for(auto it :mp)
        {
            ans=max(ans,it.second);
        }
        cout << ans << "\n";
    }
}