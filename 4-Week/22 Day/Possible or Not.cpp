//https://www.codechef.com/problems/CS2023_PON?tab=statement
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,b; cin >> n >> b;
        int temp=-1;
        for(int i=0;i<n;i++)
        {
            int a; cin >>a; 
            if((a&b)==b) temp=(temp&a);
        }
        if(temp==b) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}