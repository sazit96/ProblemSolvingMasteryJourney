#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n,l; cin >> n >> l;
    vector<string>a;
    for(int i=0;i<n;i++)
    {
        string s; cin >> s; 
        a.push_back(s);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++) cout << a[i];
    cout << "\n";
    return 0;
}