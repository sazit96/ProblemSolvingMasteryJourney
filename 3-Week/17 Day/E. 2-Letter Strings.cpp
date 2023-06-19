//https://codeforces.com/problemset/problem/1669/E

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<string, long long> m;
        long long ans = 0;
        for (int i = 0; i < n; i++) 
        {
            string s;cin>>s;
            string temp=s;
            for(char ch='a';ch<='z';ch++)
            {
                if(ch!=s[0])
                {
                    temp[0]=ch;
                    ans+=m[temp];
                }
            }
            temp=s;
            for(char ch='a';ch<='z';ch++)
            {
                if(ch!=s[1])
                {
                temp[1]=ch;
                ans+=m[temp];
                }
            }
            m[s]++;
        }
        cout << ans << "\n";
    }
    return 0;
}
