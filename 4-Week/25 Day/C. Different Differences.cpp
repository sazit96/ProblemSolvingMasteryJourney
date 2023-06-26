//https://codeforces.com/contest/1772/problem/C
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int k,n; cin >> k >> n;
        vector<int>a(k);
        for(int i=0;i<k;i++)
          a[i]=i+1;
        for(int i=1;i<k-1;i++)
        {
            if(a[k-1]+i<=n)
            {
                for(int j=0;j<i;j++)
                  a[k-j-1]+=i;
            }
            else break;
        }
        for(int i: a) cout << i <<" ";
        cout << "\n";
    }
    return 0;
}