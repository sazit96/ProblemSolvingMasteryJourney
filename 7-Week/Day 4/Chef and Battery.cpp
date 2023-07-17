//https://www.codechef.com/problems/FIFTYPE?tab=statement
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >>t; 
    while (t--)
    {
        int n; cin >> n;
        int mini=0;
        while(n!=50)
        {
            if(n>50) 
            {
                n-=3;
                mini++;
            }
            else
            {
                n+=2;
                mini++;
            }
        }
        cout << mini << "\n";
    }
    return 0;
}