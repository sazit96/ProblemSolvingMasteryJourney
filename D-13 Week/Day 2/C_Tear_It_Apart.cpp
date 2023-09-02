#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s; 
        int n=s.size();
        int p[n];
        for(int i=0;i<n;i++)
         p[i]=s[i] - 'a';
        int ans=0;
        int cnt=0;
        int f_ans=1e7;
        int g_ans=0;
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<n;j++) 
            {
                if(p[j]==i || j== n-1) 
                {
                    g_ans=0;
                    if(p[j]!=i) cnt++;
                    while(cnt!=0)
                    {
                        cnt/=2;
                        g_ans++;
                    }
                    ans=max(ans,g_ans);
                }
                else cnt++;
            }
            f_ans=min(ans,f_ans);
            ans=0;
        }
        cout << f_ans << "\n";
    }
    return 0;
}