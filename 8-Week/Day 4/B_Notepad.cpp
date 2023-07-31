//  find two duplicate  string in a size of n string  ex: 8 labacaba
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s; 
        set<pair<char,char>>st;
        bool x=false;
        for(int i=2;i<n;i++)
        {
            if(st.count({s[i-1],s[i]}))
            {
                x =true;
            }
            st.emplace(s[i-2],s[i-1]);
        }
        if(x) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}