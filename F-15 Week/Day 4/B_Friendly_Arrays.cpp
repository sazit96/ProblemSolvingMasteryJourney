#include "bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int minVal = 0;
        priority_queue<int> arrayA, arrayB;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            arrayA.push(val);
        }
        for (int i = 0; i < m; i++)
        {
            int val;
            cin >> val;
            arrayB.push(val);
        }
        while (!arrayB.empty())
        {
            minVal |= arrayB.top();
            arrayB.pop();
        }
        int xorVal1 = 0;
        int xorVal2 = 0;
        while (!arrayA.empty())
        {
            xorVal1 ^= (arrayA.top() | minVal);
            xorVal2 ^= arrayA.top();
            arrayA.pop();
        }
        int minPossibleX = min(xorVal1, xorVal2);
        int maxPossibleX = max(xorVal1, xorVal2);
        cout << minPossibleX << " " << maxPossibleX << "\n";
    }
}
