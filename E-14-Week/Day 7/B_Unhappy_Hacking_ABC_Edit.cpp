#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    string s; cin >> s; 
    string ans = "";
    for(auto c : s)
    {
        if(c=='0') ans+='0';
        else if(c=='1') ans+='1';
        else if(c=='B' && !ans.empty()) ans.pop_back();
    }
    cout << ans << "\n";
    return 0;
}