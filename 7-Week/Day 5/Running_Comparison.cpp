#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector <int> ai(n),bi(n);
        for(int i=0;i<n;i++) cin >> ai[i]; 
        for(int i=0;i<n;i++) cin >> bi[i];
        int ans=0;
        for(int i=0;i<n;i++)
         if(ai[i]*2>=bi[i] && bi[i]*2>=ai[i]) ans++;
        cout << ans << "\n";
    }
    return 0;
}