#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int>a(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]]!=0)
            {
                int val=a[i];
                ans++;
                while(mp[val]>0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}