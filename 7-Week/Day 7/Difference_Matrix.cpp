#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >>n;
        int x=1,y=2;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(x<=n*n)
                {
                    cout << x << " ";
                    x+=2;
                }
                else 
                {
                    cout << y << " ";
                    y+=2;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}