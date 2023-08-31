#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string s;cin>>s;
        int a=-1;
        int b=-1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1') a=i;
            if(s[i]=='7') b=i;
        }
        if(a>b)
        cout<<71<<endl;
        else
        cout<<17<<endl;

    }
    return 0;
}