#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t; cin >>t; 
    while (t--)
    {
        int n ; cin >> n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin >>a[i];
        sort (a.begin(),a.end());
        int x=0,y=n-1,sum=0;
        while(x<y)
        {
            sum+=a[y]-a[x];
            x++;
            y--;
        }
        cout << sum << "\n";
    }
}