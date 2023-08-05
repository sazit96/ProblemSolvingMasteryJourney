#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n; cin >> n;
    for(int i=0;i<n;i++)
    {
        string s; cin >> s; 
        cout << s; 
        reverse(s.begin(),s.end());
        cout << s << "\n";
    }
    return 0;
}