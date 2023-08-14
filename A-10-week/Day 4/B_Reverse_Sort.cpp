#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        string s; cin >> s; 
        string s1=s;
        sort(s1.begin(),s1.end());
        vector <int> p;
        for(int i=0; i<n; i++)
        {
            if(s[i]!=s1[i]) p.push_back(i+1);
        }
        if(p.size()==0) cout << "0\n";
        else 
        {
            cout << "1\n";
            cout << p.size() << " ";
            for(auto i: p) cout << i << " ";
            cout << "\n";
        }
    }
    return 0;
}