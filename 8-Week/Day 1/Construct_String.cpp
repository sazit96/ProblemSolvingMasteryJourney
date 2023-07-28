#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        string u; cin >> u;
        for(int i=0;i<n;i++)
        {
            if(u[i]==u[i+1] && u[i]==u[i+2])
            {
                u.erase(i+1,2);
                i--;
            }
        }
        cout << u << "\n";
    }
    return 0;
}