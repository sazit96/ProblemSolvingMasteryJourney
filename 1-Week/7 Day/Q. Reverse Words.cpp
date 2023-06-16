//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool x=false;
    while(cin>>s)
    {
        reverse(s.begin(),s.end());
        if(x)
          cout<<" ";
        x=true;
        cout<<s;
    }
    return 0;
}