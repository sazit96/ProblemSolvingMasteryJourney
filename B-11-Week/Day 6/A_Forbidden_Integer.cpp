#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,k,x; cin >> n >> k >> x; 
        vector<int> ans;
        if(x!=1)
        {
            for(int i=1; i<=n; i++) ans.push_back(1);
        }
        else if(k>=2)
        {
            if(n%2==0) 
            {
                for(int i=1;i<=n/2;i++) ans.push_back(2);
            }
            else if(k>=3 && n>=3)
            {
                ans.push_back(3);
                n-=3;
                if(n%2==0)
                {
                    for(int i=1;i<=n/2;i++) ans.push_back(2);
                }
            }
        }
        if(ans.empty())
        {
            cout << "NO\n";
        }
        else 
        {
            cout << "YES\n";
            cout << ans.size() << "\n";
            for(int i: ans) cout << i << " ";
            cout << "\n";
        }
    }
    return 0;
}