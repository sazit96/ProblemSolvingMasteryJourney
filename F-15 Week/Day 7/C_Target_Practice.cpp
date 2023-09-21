#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() 
{
    int t; cin >> t;
    while (t--) 
    {
        char a[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++) 
            {
                cin >> a[i][j];
            }
        }
        ll kk = 0;
        for (int i = 0; i < 10; i++) 
        {
            for (int j = 0; j < 10; j++) 
            {
                if (a[i][j] == 'X') 
                {
                    int ring = min(min(i, 9 - i), min(j, 9 - j));
                    switch (ring) 
                    {
                        case 0: kk += 1; break;
                        case 1: kk += 2; break;
                        case 2: kk += 3; break;
                        case 3: kk += 4; break;
                        case 4: kk += 5; break;
                    }
                }
            }
        }
        cout << kk << "\n";
    }
    return 0;
}
