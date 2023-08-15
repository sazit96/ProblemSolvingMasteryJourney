#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector <int> a(n); for(int i=0; i<n; i++) cin >> a[i];
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            if( a[i]==0 && a[i-1]==0)
            {
                cnt=-1;
                break;
            }
            else if (a[i]==1)
            {
                cnt++;
                if(a[i-1]==1) cnt+=4;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}