#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n,k; cin >> n >> k;
    vector<int>a(n);
    if(k>=n){
        cout << n << "\n";
        return 0;
    }
    int mx=0,cnt=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(cnt>=k) break;
        if(mx>a[i]) cnt++;
        else
        {
            cnt=0;
            if(mx!=0)cnt++;
            mx=a[i];
        }
    }
    cout << mx << "\n";
    return 0;
}