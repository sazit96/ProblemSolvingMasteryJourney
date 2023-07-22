#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        string s; cin >>s;
        int oneC=0,zeroC=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') oneC++;
            else zeroC ++;
        }
        int minipair =min (oneC,zeroC);
        if(minipair%2==0) cout << "Ramos\n";
        else cout << "Zlatan\n";
    }
    return 0;
}