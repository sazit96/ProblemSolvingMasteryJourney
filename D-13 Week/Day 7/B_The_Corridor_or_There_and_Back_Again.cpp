#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int>d(n),s(n);
        for(int i=0;i<n;i++) cin >> d[i] >> s[i];
        int ans=10000;
        for(int i=0;i<n;i++)
        {
            if(s[i]>=3)
            {
                if(s[i]%2!=0) ans=min(ans,d[i]+s[i]/2);
                else ans=min(ans,d[i]+(s[i]/2-1));
            }
            else ans=min(ans,d[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}