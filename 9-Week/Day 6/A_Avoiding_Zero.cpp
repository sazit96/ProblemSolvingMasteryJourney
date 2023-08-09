#include<bits/stdc++.h>
using namespace std; 
bool WORKS(vector<int>&b)
{
    int sum=0;
    for(int B:b)
    {
        sum+=B;
        if(sum==0) return false;
    }
    return true ;
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int>a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        if(WORKS(a))
        {
            cout << "YES\n";
            for(int i=0;i<n;i++) cout << a[i] << " ";
            cout << "\n";
        }
        else
        {
            reverse(a.begin(),a.end());
            if(WORKS(a))
            {
                cout << "YES\n";
                for(int i=0;i<n;i++) cout << a[i] << " ";
                cout << "\n";
            }
            else cout << "NO\n";
        }
    }
    return 0;
}