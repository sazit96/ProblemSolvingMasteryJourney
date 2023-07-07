//https://codeforces.com/contest/1618/problem/B
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        vector <string> bi(n-2);
        for(int i=0; i<n-2; i++) cin >> bi[i];
        string str = bi[0];
        bool found = false;
        for(int i=1; i<n-2; i++)
        {
            if(str.back() != bi[i].front()) {
                found=true;
                str+=bi[i];
            }
            else str+=bi[i].back();
        }
        if(!found) str+='a';
        cout << str <<"\n";
    }
    return 0;
}