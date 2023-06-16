//https://www.spoj.com/problems/OLOLO/en/
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n; cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int pi; cin >> pi;
        mp[pi]++;
    }
    for(auto it : mp)
    {
        if(it.second==1)
        { 
        cout << it.first << "\n";
        return 0;
        }
    }
    return 0;
}