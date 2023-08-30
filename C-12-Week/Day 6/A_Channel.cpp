#include<bits/stdc++.h>
using namespace std; 
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, a, q;
        cin >> n >> a >> q;
        string s;
        cin >> s;
        int cnt = a, x = a;
        bool crossed = false;
        if (n == a)
            crossed = true;
        for (int i = 0; i < q; i++) 
        {
            char op = s[i];
            if (op == '+') 
            {
                cnt++;
                x++;
            if (cnt >= n) crossed = true;
            }
            else cnt--;
        }
        if (x >= n) 
        {
            if (crossed) cout << "YES" << endl;
            else cout << "MAYBE" << endl;
        } 
        else cout << "NO" << endl;
    }
    return 0;
}
