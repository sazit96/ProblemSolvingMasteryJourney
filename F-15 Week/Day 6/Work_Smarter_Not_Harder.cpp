#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int l,v1,v2; cin >> l >> v1 >> v2;
        double t1=(double) l/v1;
        double t2=(double) l/v2;
        int ans=-1;
        for(int i=0;i<t1;i++)
        {
            double t3=i+ceil(t2);
            if(t3 < t1) ans=max(ans,i);
        }
        cout << ans << "\n";
    }
    return 0;
}