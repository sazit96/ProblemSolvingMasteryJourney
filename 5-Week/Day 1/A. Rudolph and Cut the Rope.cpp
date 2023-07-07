#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >>n;
        int minimum=0;
        for(int i=0;i<n;i++){
        int ai,bi; cin >> ai >> bi;
        if(ai>bi) minimum++;
        }
        cout << minimum << "\n";
    }
}