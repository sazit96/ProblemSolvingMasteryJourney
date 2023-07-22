#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector <int> a(n+1);
        vector <int> ans(n+1);
        for(int i=0; i<n; i++)
        {
            int x; cin >>x;
            if(x<=n) a[x]++;
        }
        for (int i=1; i<=n; i++)
         for(int j=i; j<=n; j+=i)
            ans[j]+=a[i];
        cout << (*max_element(ans.begin(),ans.end())) << "\n";
    }
    return 0;
}