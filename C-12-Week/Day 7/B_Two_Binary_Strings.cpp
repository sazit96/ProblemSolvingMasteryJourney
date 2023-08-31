#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string a,b; cin >> a >> b; 
        if(a[0]!=b[0] && a[a.size()-1]!=b[b.size()-1])
        {
            cout << "NO\n";
            continue;
        }
        if(a[0]==a[a.size()-1] && b[0]==b[b.size()-1] && a[0]==b[0])
        {
            cout << "YES\n";
            continue;
        } 
        bool x=true;
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]==a[0] && b[i]==a[0] && a[i+1]==b[i+1] && a[i+1]==a[a.size()-1])
            {
                x=false;
                break;
            }
        }
        if(x) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}