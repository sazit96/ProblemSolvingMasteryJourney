#include<bits/stdc++.h>
using namespace std; 
using ll=long long;
int main ()
{
    int n,q; cin >> n >> q;
    vector<int>a(n); for(int i=0;i<n;i++) cin >> a[i];
    sort (a.begin(),a.end());
    int add [200005];
    memset(add,0,sizeof(add));
    for(int i=0; i<q; i++)
    {
        int l,r; cin >> l >> r; 
        l--,r--;
        add[l]++;
        add[r+1]--;
    }
    vector<int>v;
    int cur=0;
    for(int i=0;i<n;i++)
    {
        cur+=add[i];
        v.push_back(cur);
    }
    sort (v.begin(),v.end());
    ll res=0;
    for(int i=0;i<n;i++) res+=(ll) a[i]*v[i];
    cout << res;
    return 0;
}