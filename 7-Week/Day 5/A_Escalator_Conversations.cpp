#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,m,k,h; cin >> n >> m >> k >> h;
        vector<int>a(n); for(int i=0;i<n;i++) cin >> a[i];
        queue<int>q;
        q.push(1); q.push(2); int sum=0;
        for(int i=0;i<n;i++)
        {
            int diff=abs(h-a[i]);
            bool flag1=q.size() && diff %k==0;
            bool flag2=q.size() && diff<=(m-1)*k;
            bool flag3=q.size() && diff;
            if(q.size() && flag1 && flag2 && flag3) sum++;
        }
        cout << sum << "\n";
    
    }
    return 0;
}