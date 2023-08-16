#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector <int> a(n); for(int i=0;i<n;i++) cin >> a[i];
        vector <int> a1(n); for(int i=0;i<n;i++) cin >> a1[i];
        int l=0,r=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=a1[i])
            {
                if(l==0) l=i;
                r=i;
            }
        }
        while(l>0 && a1[l-1]<=a1[l]) l--;
        while(r<n-1 && a1[r+1]>=a1[r]) r++;
        cout << l+1 << " " << r+1 << "\n";
    }
    return 0;
}