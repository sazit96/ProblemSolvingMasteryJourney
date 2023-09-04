#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        string s; cin >> s; 
        vector<int>a(n+1);
        long long ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j+=i)
            {
                if(s[j-1]=='1') break;
                else if(a[j]==0)
                {
                    ans+=i;
                    a[j]=1;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}