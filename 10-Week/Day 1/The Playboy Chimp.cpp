#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n; cin >>n; 
    vector<int>heights(n); for(int i=0;i<n;i++) cin >> heights[i];
    sort(heights.begin(),heights.end());
    int q; cin >> q; 
    while(q--)
    {
        int x; cin >> x; 
        auto low=lower_bound(heights.begin(),heights.end(),x);
        auto up=upper_bound(heights.begin(),heights.end(),x);
        if(low==heights.begin()) cout << "X ";
        else cout << *(--low)<< " ";
        if(up==heights.end()) cout << "X\n";
        else cout << *up << "\n";
    }
    return 0;
}