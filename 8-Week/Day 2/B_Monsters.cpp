#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        vector <int> a(n); for(int i=0;i<n;i++) cin >> a[i];
        vector<pair<int,int>> pr;
        for(int i=0;i<n;i++) 
        {
            int res =a[i]%k;
            if(res == 0) res+=k;
            pr.push_back(make_pair(-res,i));
        }
        sort (pr.begin(),pr.end());
        for(auto &x : pr) cout << x.second +1 << " ";
        cout << "\n";
    }
    return 0;
}