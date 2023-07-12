//https://www.codechef.com/START98D/problems/FINDK3
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int x,y,z; cin >> x >> y >> z;
        int a,b;
        if((x*y)%z==0) 
        {
            a=x*y;b=z;
            cout << a << " " << b << "\n";
        }
        else if((y*z)%x==0)
        {
            a=y*z;b=x;
            cout << a << " " << b << "\n";
        }
        else if((x*z)%y==0)
        {
            a=x*z;b=y;
            cout << a << " " << b << "\n";
        }
        else cout << -1 <<"\n";
    }
}