//https://codeforces.com/contest/1154/problem/A
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
   vector<int> x(4);
   for(int i=0;i<4;i++) cin >> x[i];
   sort (x.begin(),x.end());
   cout << x.back()-x[2] << ' ' << x.back()-x[1] << ' ' << x.back()-x[0] << "\n";
   return 0;
}