#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector <int> a(n); for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        if(a[0]!=1){
            cout << "NO\n";
            continue;
        }
        int sum=a[0];
        for(int i=1;i<n;i++)
        {
            if(a[i]<=sum) sum+=a[i];
            else{
                sum=-1;
                break;
            }
        }
        if(sum!=-1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}