#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,k; cin >> n >> k;
        if(n%2==1 && k%2==0)
        {
            cout << "NO\n";
            continue;
        }
        if(n%2==k%2)
        {
            if(n-k+1<=0) 
            {
                cout << "NO\n";
                continue;
            }
            cout << "YES\n";
            for(int i=1;i<k;i++) cout << "1 ";
            cout << n-k+1 << "\n";
        }
        else
        {
            if(2*k>n)
            {
                cout << "NO\n";
                continue;
            }
            cout << "YES\n";
            for(int i=1;i<k;i++) cout << "2 ";
            cout << n-2*(k-1) << "\n";
        }
    }
    return 0;
}