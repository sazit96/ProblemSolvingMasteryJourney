#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,x; cin >> n >> x;
        int ans=1;
        string s="";
        for(int i=0;i<n;i++)
        {
            if(ans==x) s+='*';
            else if(ans>x){
                s+='-'; ans--;
            }
            else {
                s+='+';ans++;
            }
        }
        if(ans==x) cout << s <<"\n";
        else cout << "-1\n";
    }
    return 0;
}