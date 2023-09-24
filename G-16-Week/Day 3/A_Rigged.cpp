#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<pair<int,int>>a;
        while(n--)
        {
            int s,e; cin >> s >> e;
            a.push_back({s,e});
        }
        int mx=a[0].first;
        int mx1=a[0].second;
        bool x=true;
        for(int i=1;i<a.size();i++)
        {
            if(a[i].first>=mx && a[i].second>=mx1)
            {
                x=false;
                break;
            }
        }
        if(!x) cout << "-1\n";
        else cout << mx << "\n";
    }
    return 0;
}