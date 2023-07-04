//https://codeforces.com/contest/1714/problem/C
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int s; cin >> s; 
        vector <int> a;
        int sum=0;
        for(int i=9; i; i--)
        {
            if(sum+i>s) continue;
            sum+=i;
            a.push_back(i);
        }
        reverse(a.begin(),a.end());
        for(int &i :a) cout << i;
        cout << "\n";
    }
    return 0;
}