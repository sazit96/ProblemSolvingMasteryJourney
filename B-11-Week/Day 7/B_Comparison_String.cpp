#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n; 
        string s; cin >> s;
        int cnt=1,ans=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1]) cnt++;
            else 
            {
                ans= max (ans,cnt);
                cnt=1;
            }
        }
        cout << ans + 1 << "\n";
    }
    return 0;
}