// next sum and count in a array 
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,h; cin >> n >> h; 
        vector<int>a(n); for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(),a.end(),greater<int>());
        int sum=(a[0]+a[1]);
        int cnt=h/sum;
        h%=sum;
        int ans=cnt*2;
        if(h)
        {
            ans++;
            h-=a[0];
            if(h>0) ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}