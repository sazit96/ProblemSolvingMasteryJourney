#include<bits/stdc++.h>
using namespace std; 
string chack_Two_tv(int n,vector<pair<int,int>>&pr)
{
    vector<pair<int,int>>ev;
    for(int i=0;i<n;i++)
    {
        int first=pr[i].first;
        int end=pr[i].second;
        ev.push_back({first,1});
        ev.push_back({end+1,-1});
    }
    sort(ev.begin(),ev.end());
    int cnt=0;
    for(auto event:ev)
    {
        cnt+=event.second;
        if(cnt>3) return "NO";
    }
    return "YES";
}
int main ()
{
    int n; cin >> n;
    vector<pair<int,int>>pr;
    for(int i=0;i<n;i++)
    {
        int li,ri; cin >> li >> ri;
        pr.push_back({li,ri});
    }
    cout << chack_Two_tv(n,pr) << "\n";
    return 0;
}