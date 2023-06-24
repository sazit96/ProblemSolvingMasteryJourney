//https://codeforces.com/contest/1843/problem/D
#include <bits/stdc++.h>
#define ll long long int
using namespace std; 
ll cs=1;
vector<ll>v[200008];
ll leaf[200008];
bool visited[200008];
ll count_leaf(ll src)
{
    visited[src]=true;
    ll ans=0;
    bool l=true;
    for(ll i=0;i<v[src].size();i++)
    {
        if(!visited[v[src][i]])
        {
            l=false;
            ans+=count_leaf(v[src][i]);
        }
    }
    if(l) return leaf[src]=1;
    else return leaf[src] = ans;
}
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin>> n;
        ll e=n-1;
        memset(visited,false,sizeof(visited));
        memset(leaf,0,sizeof(leaf));
        while(e--)
        {
            ll a,b;
            cin >> a >> b; 
            v[a].push_back(b);
            v[b].push_back(a);
        }
        ll q;
        count_leaf(1);
        cin >> q;
        while(q--)
        {
            ll x,y;
            cin >> x >> y;
            cout << leaf[x] * leaf[y] << "\n";
        }
        for(ll i=1;i<=n;i++)  v[i].clear();
    }
    return 0;
}