#include<bits/stdc++.h>
using namespace std; 
void test_case()
{
    int n; cin >> n; 
    vector <int> a(n); for(int i=0; i<n; i++) cin >> a[i];
    if(n%2==1)
    {
        cout << "NO\n"; return;
    }
    sort(a.begin(),a.end());
    vector <int> ans(n);
    int j=0;
    for(int i=0; i<n; i+=2) ans[i]= a[j++];
    for(int i=1; i<n; i+=2) ans[i]= a[j++];
    ans.push_back(ans[0]);
    for(int i=1; i<n; i++)
    {
        if(ans[i-1] < ans[i] && ans[i] > ans[i+1]) continue;
        if(ans[i-1] > ans[i] && ans[i] < ans [i+1]) continue;
        else
        {
            cout << "NO\n"; return;
        }
    }
    cout << "YES\n";
    for(int i=0; i<n; i++) cout << ans[i] << " " ;
    cout <<  "\n";
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        test_case();
    }
    return 0;
}