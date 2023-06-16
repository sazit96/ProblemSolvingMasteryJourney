//https://codeforces.com/contest/1692/problem/D
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t; cin >> t;
    while(t--)
    {
        int h,m,x;
        char c;
        cin >> h >> c >> m >> x;
        vector<int>vis(3100,0);
        int ans=0;
        while(!vis[h*100+m])
        {
            vis[h * 100 + m] = 1;
            if(h / 10 == m % 10 && h % 10 == m /10)
              ans++;
            m += x;
            h += m / 60;
            m %= 60;
            h %= 24;
        }
        cout << ans << "\n";
    }
}