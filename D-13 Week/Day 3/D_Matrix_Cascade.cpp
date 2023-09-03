#include<bits/stdc++.h>
using namespace std; 
const int N = 3000 + 5;
int n;
vector<string>s;
int d1[N][N];
int d2[N][N];
int cur[N][N];
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        s.clear();s.resize(n);
        for(int i=0;i<n;i++) cin >> s[i];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                d1[i][j]=0;
                d2[i][j]=0;
                cur[i][j]=0;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j-1>=0) cur[i][j] = d1[i][j] + d2[i][j] + cur[i][j-1];
                else cur[i][j] = d1[i][j] + d2[i][j];
            }
            for(int j=0;j<n;j++)
            {
                char aita=s[i][j];
                if(cur[i][j]%2)
                {
                    if(aita=='0') aita = '1';
                    else aita = '0';
                }
                if(aita == '1')
                {
                    ans++;
                    d1[i][j]++;
                    if(j+1<n) d2[i][j+1]--;
                }
            }
            for(int j=0;j<n;j++)
            {
                if(i+1>=n) break;
                if(j-1>=0) d1[i+1][j-1] += d1[i][j];
                else d1[i+1][j] += d1[i][j];
                if(j+1<n) d2[i+1][j+1] += d2[i][j];
            }
        }
        cout << ans << "\n";
    }
    return 0;
}