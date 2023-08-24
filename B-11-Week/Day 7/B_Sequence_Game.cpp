#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int>v(n);
        vector<int> ans;
        int count =1; 
        for(int i=0;i<n;i++) cin >> v[i];
        ans.push_back(v[0]);
        for(int i=1;i<n;i++)
        {
            if(v[i]>=v[i-1])
            {
                ans.push_back(v[i]);
                count++;
            }
            else 
            {
                ans.push_back(v[i]);
                ans.push_back(v[i]);
                count+=2;
            }
        }
        cout << count << "\n";
        for(int i:ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}