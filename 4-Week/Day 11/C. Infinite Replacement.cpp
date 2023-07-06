//https://codeforces.com/contest/1674/problem/C
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int q; cin >> q;
    while (q--)
    {
        string s,t; cin >> s >> t; 
        int n=s.size() , m=t.size() , as=0 , at=0;
        for(int i=0;i<n;i++) 
         if(s[i] == 'a') as++;
        for(int i=0;i<m;i++)
         if(t[i] == 'a') at++;
        if(at>0)
        {
            if(t == "a") cout << 1 << "\n";
            else cout << -1 << "\n";
        }
        else cout <<(((long long ) 1) << as) << "\n";
    }
    return 0;
}