//https://codeforces.com/contest/1692/problem/B
#include<bits/stdc++.h>
using namespace std;
int main() 
{
   int t; cin>>t;
   while(t--)
   {
    int n; cin >> n;
    vector<int>a(n);
    unordered_set<int>dis;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        dis.insert(a[i]);
    }
    int x=dis.size();
    int final_len=x-(x%2!=n%2);
    cout << final_len << endl;
   }
   return 0;
}
