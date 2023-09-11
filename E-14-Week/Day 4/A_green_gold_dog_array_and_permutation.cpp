#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<pair<int,int>>pr;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x; 
            pr.push_back({x,i});
        }
        sort(pr.begin(),pr.end());
        int p=n;
        for(int i=0; i<n; i++)
        {
            pr[i].first=p;
            p--;
        }
        vector <int> ans(n);
        for(int i=0; i<n; i++)
         ans [pr[i].second]=pr[i].first;
        for(int i=0; i<n; i++) cout << ans [i] <<" ";
        cout << "\n";
    }
    return 0;
}