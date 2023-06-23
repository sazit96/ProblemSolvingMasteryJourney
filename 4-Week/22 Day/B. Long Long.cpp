//https://codeforces.com/contest/1843/problem/B
#include<bits/stdc++.h> 
using namespace std; 
#define ll long long int
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        bool prev=true;  
        ll cnt=0,sum=0;
        for(int i=0;i<n;i++)
        {
            int a; cin >> a; 
            if(a<0 && prev)
            {
                cnt++;
                prev=false;
            }
            if(a>0) prev=true;
            sum+=abs(a);
        }
        cout << sum <<' '<< cnt << endl;
    }
}