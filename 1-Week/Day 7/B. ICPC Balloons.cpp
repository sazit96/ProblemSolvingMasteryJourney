//https://codeforces.com/contest/1703/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        set<char>seen;
        int balloons=0;
        for(int i=0;i<n;i++)
        {
            char c=s[i];
            if(seen.find(c)==seen.end())
            {
                balloons+=2;
                seen.insert(c);
            }
            else
              balloons++;
        }
        cout<<balloons<<endl;
    }
    return 0;
}