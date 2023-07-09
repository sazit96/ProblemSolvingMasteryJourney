//https://codeforces.com/contest/1272/problem/B
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int q; cin >> q; 
    while (q--)
    {
        string s; cin >> s; 
        int l=0,r=0,d=0,u=0;
        for(char c :s)
        {
            l+=c=='L';
            r+=c=='R';
            d+=c=='D';
            u+=c=='U';
        }
        l=min(l,r);
        u=min(u,d);
        if(l==0 || u==0)
        {
            l=min(l,1);
            u=min(u,1);
        }
        string ans;
        for(int i=0;i<l;i++) ans+='R';        
        for(int i=0;i<u;i++) ans+='U';  
        for(int i=0;i<l;i++) ans+='L';      
        for(int i=0;i<u;i++) ans+='D';        
        cout << ans.length() << "\n" << ans << "\n";
    }
    return 0;
}