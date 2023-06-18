//https://codeforces.com/contest/1703/problem/D
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    for(int i=0;i<t;i++)
    {
        int n; cin >> n;
        vector<string>s(n);
        set<string>st;
        for(int j=0;j<n;j++)
        {
            cin>>s[j];
            st.insert(s[j]);
        }
        string ans;
        for(int j=0;j<n;j++)
        {
            bool found=false;
            for(int k=1;k<s[j].size();k++)
            {
                if(st.count(s[j].substr(0,k))>0 && st.count(s[j].substr(k))>0)
                  found=true;
            }
            if(found) ans+='1';
            else  ans+='0';
        }
        cout << ans <<"\n";
    }
}