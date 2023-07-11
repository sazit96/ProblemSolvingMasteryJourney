//https://codeforces.com/contest/1742/problem/D
#include<bits/stdc++.h>
using namespace std; 

int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        vector<int> arr(1010);
        for(int i=1;i<=n;i++)
        {
            int a; cin >>a;
            arr[a]=i;
        }
        int ans=-1;
        for(int i=1;i<=1000;i++)
        {
            for(int j=1;j<=1000;j++)
            {
                if(arr[i]>0 && arr[j]>0 && __gcd(i,j)==1)
                 ans=max(ans,arr[i]+arr[j]);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}