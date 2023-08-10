#include<bits/stdc++.h>
using namespace std; 
using ll=long long;
int main ()
{
    int n; cin >> n; 
    vector<int>a(n); for(int i=0;i<n;i++) cin >> a[i];
    ll l=0,r=n-1,sum1=0,sum2=0,ans=0;
    while(l<=r)
    {
        if(sum1<sum2)
        {
            sum1+=a[l];
            l++;
        }
        else 
        {
            sum2+=a[r];
            r--;
        }
        if(sum1==sum2) ans= sum1;
    }
    cout << ans << "\n";
}