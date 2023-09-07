#include<bits/stdc++.h>
using namespace std; 
void test_case()
{
    int n,m; cin >> n >> m; 
    vector<string>s(n); for(int i=0;i<n;i++) cin >> s[i];
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<m;j++)
        {
            if(s[i][j]=='U' || s[i][j]=='D') cnt++;
        }
        if(cnt%2==1)
        {
            cout << "-1\n"; return;
        }
    }
    for(int i=0;i<m;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(s[j][i]=='L' || s[j][i]=='R') cnt++;
        }
        if(cnt%2==1)
        {
            cout << "-1\n"; return;
        }
    }
    vector<string> ans(s);
    vector<vector<bool>>vis(n,vector<bool>(m,false));
    for(int i=0;i<n;i++)
    {
        int col=0;
        for(int j=0;j<m;j++)
        {
            if(vis[i][j]) continue;
            if(s[i][j]=='U')
            {
                vis[i][j]=true;
                vis[i+1][j]=true;
                if(col==0)
                {
                    ans[i][j]='W'; ans[i+1][j]='B';
                }
                else 
                {
                    ans[i][j]='B'; ans[i+1][j]='W';
                }
                col^=1;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        int row=0;
        for(int j=0;j<n;j++)
        {
            if(vis[j][i]) continue;
            if(s[j][i]=='L')
            {
                vis[j][i]=true;
                vis[j][i+1]=true; 
                if(row==0)
                {
                    ans[j][i]='W'; ans[j][i+1]='B';
                }
                else
                {
                    ans[j][i]='B'; ans[j][i+1]='W';
                }
                row^=1;
            }
        }
    }
    for(int i=0;i<n;i++) cout << ans[i] << "\n";
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        test_case();
    }
    return 0;
}