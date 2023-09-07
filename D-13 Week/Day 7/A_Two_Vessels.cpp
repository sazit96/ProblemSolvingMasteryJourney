#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int a,b,c; cin >> a >> b >> c; 
        if(a==b) cout << "0\n";
        else
        {
            int ans=0;
            int max_val=max(a,b);
            int min_val=min(a,b);
            while(max_val>min_val)
            {
                max_val-=c;
                min_val+=c;
                ans++;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}