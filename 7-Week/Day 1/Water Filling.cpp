//https://www.codechef.com/problems/WATERFILLING
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >>t; 
    while (t--)
    {
    int b1,b2,b3; cin >> b1 >> b2 >>b3;
    int sum=b1+b2+b3;
    if(sum>=2) cout << "Not now\n";
    else cout << "Water filling time\n";
    }
    return 0;
}