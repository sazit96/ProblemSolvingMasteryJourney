#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,k,x; cin >> n >> k >> x;
        if(n<k || x+1<k) cout << "-1\n";
        else 
        {
            int ans=0;
            for(int i=0;i<k;i++) ans+=i;
            if(x==k) x-=1;
            for(int i=0;i<(n-k);i++) ans+=x;
            cout << ans << "\n";
        }
    }
    return 0;
}