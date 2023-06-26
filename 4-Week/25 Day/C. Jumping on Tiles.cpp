#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin>>t; 
    while (t--)
    {
        string s; cin >> s;
        int n=s.size();
        if(s[0]>s[n-1])
         for(char &c :s) c=('a'+'z'-c);
        vector<int>a[26];
        for(int i=0;i<n;i++) a[s[i]-'a'].push_back(i);
        vector<int>res;
        for(char i=s[0];i<=s[n-1];i++)
         for(int j : a[i-'a']) res.push_back(j);
        cout << (s[n-1]-s[0]) << " " << res.size() << "\n";
        for(int j : res) cout << j+1 << " ";
        cout << "\n";
    }
    return 0;
}