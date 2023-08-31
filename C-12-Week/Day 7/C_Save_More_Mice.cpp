#include<bits/stdc++.h>
using namespace std; 
using ll=long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k; 
        vector<int>a(k); for(int i=0;i<k;i++) cin >> a[i];
        sort(a.begin(),a.end());
        int s=0,e=k+1;
        while(e-s>1)
        {
            int mid=(s+e)/2;
            vector<int> a2(mid);
            for(int i=0;i<mid;i++)
             a2[i]=a[k-mid+i];
            ll x=0;
            for(int i=0;i<mid;i++)
             x+=n-a2[i];
            if(x<=n-1) s=mid;
            else e=mid;
        }
        cout << s << "\n";
    }
    return 0;
}