#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n; cin >>n;
    vector <int> a(n); for(int i=0;i<n;i++) cin >> a[i];
    vector<pair<int,int>> p(n);
    for(int i=0;i<n;i++) p[i]=make_pair(a[i],i);
    sort (p.begin(),p.end(),greater<pair<int,int>> ());
    long long  ans=0;
    for(int i=0;i<n;i++) ans+=p[i].first*i+1;
    cout << ans << "\n";
    for(int i=0;i<n;i++)
    {
        cout << p[i].second+1;
        if(i<n-1) cout << " ";
    }
    cout << "\n";
    return 0;
}