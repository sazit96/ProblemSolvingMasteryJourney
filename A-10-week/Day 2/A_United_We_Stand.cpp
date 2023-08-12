#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int>a(n);
        vector<int>b,c;
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        int count=0;
        int val=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]==val) count++;
        }
        if(count == n) cout << "-1\n";
        else 
        {
            cout << count << " " << n-count << "\n";
            for(int i=0;i<count; i++) cout << a[i] << " ";
            cout << "\n";
            for(int i=count;i<n;i++) cout << a[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}