#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int> a(n); 
        set <int> st;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        if(n==1) cout << "1\n";
        else if(st.size()!=2) cout << n << "\n";
        else cout << ((n-2)/2)+2 << "\n";
    }
    return 0;
}