#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s; 
        vector<int> pref(n+1),suf(n+1);
        set<char>st; 
        int ans=0;
        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
            pref[i+1]=st.size();
        }
        st.clear();
        for(int i=n-1;i>=0;i--)
        {
            st.insert(s[i]);
            suf[i]=st.size();
            ans=max(ans,pref[i]+suf[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}