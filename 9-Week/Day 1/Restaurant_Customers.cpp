#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n; cin >> n; 
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int a,b; cin >> a >> b;
        mp[a]++; mp[b]--;
    }
    int ans=0,maxi=0;
    for(auto x: mp)
    {
        ans+=x.second;
        maxi=max(ans,maxi);
    }
    cout << maxi << "\n";
    return 0;
}