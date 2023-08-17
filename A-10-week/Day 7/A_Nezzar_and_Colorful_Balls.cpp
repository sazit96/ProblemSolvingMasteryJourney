#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int> a(n);
        map <int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int mini=0;
        for(auto i: mp)
        {
            if(i.second>mini) mini=i.second;
        }
        cout << mini << "\n";
    }
    return 0;
}