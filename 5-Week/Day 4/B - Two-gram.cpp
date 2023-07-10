#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n; cin >> n; 
    string s; cin >> s; 
    unordered_map<string,int>mp;
    for(int i=0;i<n-1;i++) mp[s.substr(i,2)]++;
    string ans;
    int opt=0;
    for(auto a :mp)
    {
        if(a.second>opt)
        {
            opt=a.second;
            ans=a.first;
        }
    }
    cout <<  ans << "\n";
    return 0;
}