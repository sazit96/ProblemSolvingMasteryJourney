#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int s,p; cin >> s >> p;
        vector<int> m(s);for(int i=0;i<s;i++) cin >> m[i];
        sort(m.begin(),m.end());
        int ans=m[s-p]-1;
        cout << ans << "\n";
    }
    return 0;
}