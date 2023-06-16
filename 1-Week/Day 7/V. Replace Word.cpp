//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string target="EGYPT";
    string rep=" ";
    string ans;
    for(int i=0;i<s.size();i++)
    {
        if(s.substr(i,target.size())==target)
        {
            ans+=rep;
            i+=target.size()-1;
        }
        else
          ans+=s[i];
    }
    cout<<ans<<endl;
}