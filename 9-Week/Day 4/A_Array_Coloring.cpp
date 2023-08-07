#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n; 
        vector<int>a(n);
        int x;
        for(int i=0;i<n;i++)
        {
            cin >> x;
            a.push_back(x);
        }
        int odd=0,even=0,cnt=0;
        for(int i=0;i<a.size();i++)
        {
            cnt+=a[i];
            if(a[i]%2==0) odd++;
            else even++;
        }
        if(cnt%2!=0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}