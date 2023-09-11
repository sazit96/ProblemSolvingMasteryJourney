#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        string s; cin >> s; 
        vector <int> ans (n+1);
        int cnt,per1,per2;
        cnt=per1=per2=0;
        int l=0,r=n-1;
        while (l<r)
        {
            if(s[l]!=s[r]) cnt++;
            if(s[l]==s[r] && (s[l]=='0')) per1++;
            else if(s[l]==s[r] && (s[l]=='1')) per2++;
            l++;
            r--;
        }
        if(cnt==0) ans[0]=1;
        int v=0;
        if(n&1) v=1;
        for(int i=1; i<=n;i++)
        {
            if(cnt>i) continue;
            int x=i-cnt;
            if(x>(per1*2 + per2*2)+v) continue;
            if(x&1)
            {
                if(n%2==0) continue;
                else ans[i]=1;
            }
            else ans[i]=1;
        }
        string res;
        for(int i=0; i<=n; i++) res.push_back((ans[i]+'0'));
        cout << res << "\n";
    }
    return 0;
}