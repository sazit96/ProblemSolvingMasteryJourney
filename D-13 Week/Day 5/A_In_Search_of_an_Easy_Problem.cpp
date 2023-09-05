#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n; cin >> n; 
    vector<int>a(n); for(int i=0;i<n;i++) cin >> a[i];
    bool ans = true;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0) ans= false;
    }
    if(ans) cout << "EASY\n";
    else cout << "HARD\n";
    return 0;
}