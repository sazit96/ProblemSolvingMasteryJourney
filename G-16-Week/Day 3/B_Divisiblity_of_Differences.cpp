#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n,k,m; cin >> n >> k >> m; 
    vector<vector<int>>a(m);
    for(int i=0;i<n;i++)
    {
        int x; cin >> x; 
        a[x%m].push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        if(a[i].size()>=k)
        {
            cout << "Yes\n";
            for(int j=0;j<k;j++) cout << a[i][j] << " ";
            cout << "\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}