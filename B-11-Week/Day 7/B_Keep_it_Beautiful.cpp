#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int>a; 
        int neg=0;
        for(int i=0; i<n; i++)
        {
            int x; cin >> x; 
            if(a.empty() || (!neg && a.back()<=x))
            {
                a.push_back(x); 
                cout << "1";
            }
            else if((!neg && a[0] >= x) || (neg && a.back()<= x && a[0]>=x))
            {
                neg=1;
                a.push_back(x);
                cout << "1";
            }
            else cout << "0";
        }
        cout << "\n";
    }
    return 0;
}