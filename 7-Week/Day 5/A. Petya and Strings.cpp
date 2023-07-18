//https://codeforces.com/contest/112/problem/A
#include<Bits/stdc++.h>
using namespace std; 
int main ()
{
    string s1,s2; cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++) 
    {
     char c1 = tolower(s1[i]);
     char c2 = tolower(s2[i]);
     if (c1 < c2) 
      {
        cout << "-1\n";
        return 0;
      } 
     else if (c1 > c2) 
      {
       cout << "1\n";
        return 0;
      }
    }
    cout << "0\n";
    return 0;
}