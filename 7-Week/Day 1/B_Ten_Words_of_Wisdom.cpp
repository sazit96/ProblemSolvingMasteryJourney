#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n;
        int ans=0;
        int max=0;
        for(int i=1;i<=n;i++)
        {
            int a,b; cin >> a >> b;
            if(a<=10)
            {
               if(b>max)
               {
                max=b;
                ans=i;
               }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}