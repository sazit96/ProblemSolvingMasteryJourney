#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,a,b; cin >> n >> a >> b; 
        vector<int>v;
        v.push_back(a);
        for(int i=n;i>0;i--)
        {
            if(i!=a && i!=b) v.push_back(i);
        }
        v.push_back(b);
       if(v.size() == n && *min_element(v.begin(), v.begin() + n/2) == a && *max_element(v.begin() + n/2, v.end()) == b)
        {
            for(int i=0;i<n;i++) cout << v[i] << " ";
            cout << "\n";
        }
        else cout << "-1\n";
    }
    return 0;
}