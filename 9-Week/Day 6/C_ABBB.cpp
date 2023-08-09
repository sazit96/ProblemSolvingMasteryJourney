#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s; 
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='B' && !ans.empty())
            {
                ans.pop_back();
                continue;
            }
            ans+=s[i];
        }
        cout << ans.size() << "\n";
    }
    return 0;
}