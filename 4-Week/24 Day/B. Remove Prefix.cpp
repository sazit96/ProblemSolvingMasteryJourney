#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        set<int> x;
        int i;
        for (i = n - 1; i >= 0; i--)
        {
            if (x.count(a[i]))break;
            x.insert(a[i]);
        }
        cout << i+1 << "\n";
    }
    return 0;
}
