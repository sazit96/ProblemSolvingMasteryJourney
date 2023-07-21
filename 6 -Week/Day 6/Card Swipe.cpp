#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        vector <int> a(n+2);
        int mx=0,count=0;
        for(int i=0;i<n;i++)
        {
            int arr;cin >> arr;
            a[arr]++;
            if(a[arr]==1) count ++;
            if(a[arr]==2){
                a[arr]=0; count --;
            }
            mx=max(mx,count);
        }
        cout << mx << "\n";
    }
    return 0;
}