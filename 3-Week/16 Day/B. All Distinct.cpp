//https://codeforces.com/contest/1692/problem/B
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >>t; 
    while (t--)
    {
        int n; cin >> n; 
        vector<int>a(10001,0);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x; cin >>x;
            if(a[x]) ans++;
            else a[x]=1;
        }
        cout<< n-(ans+1)/2*2 <<"\n";
    }
}