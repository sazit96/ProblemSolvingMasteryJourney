#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        ll n,m; cin >> n >> m; 
        string s; cin >> s; 
        string k; cin >> k; 
        int ans=1e9;
        for(int i=0;i<=n-m;i++)
        {
            int cc=0;string tmp=s.substr(i,m);
            for(int j=0;j<m;j++)
            {
                int x=(int) (tmp[j]-'0');
                int y=(int) (k[j]-'0');
                cc+= min(abs(x - y), 10 - abs(x - y));

            }
            if(cc<ans) ans=cc;
        }
        cout << ans << "\n";
    }
    return 0;
}