#include<bits/stdc++.h>
using namespace std; 
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x_str;
        cin >> x_str;
        reverse(x_str.begin(), x_str.end());
        x_str += '0';
        int k = 0;
        for (int i = 0; i < x_str.size(); i++)
        {
            if (x_str[i] >= '5')
            {
                x_str[i + 1]++;
                for (int j = i; j >= k; j--)
                    x_str[j] = '0';
                k = i;
            }
        }
        reverse(x_str.begin(), x_str.end());
        int st = 0;
        if (x_str[0] == '0')
            st++;
        for (st; st < x_str.size(); st++)
            cout << x_str[st];
        cout << "\n";
    }
    return 0;
}
