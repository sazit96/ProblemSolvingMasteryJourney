#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int x,y; cin >> x >> y; 
        vector<int>a(x);
        int ans=0;
        for(auto &i : a) cin >> i; 
        sort(a.rbegin(),a.rend());
        for(int i=0;i<x;i++)
        {
            if(ans<a[i] && y <=a[i]) ans+=a[i];
            else y = y-a[i];
        }
        cout << ans << "\n";
    }
    return 0;
}