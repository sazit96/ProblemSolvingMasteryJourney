#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int count3=0,cout5=0,cout7=0;
        if(n==1 || n==2 || n==4) cout <<"-1\n";
        else 
        {
            if(n%3==2)
            {
                cout5++;
                n-=5;
            }
            else if(n%3==1)
            {
                cout7++;
                n-=7;
            }
            count3=n/3;
            cout << count3 << " " << cout5 << " " << cout7 << "\n";
        }
    }
    return 0;
}