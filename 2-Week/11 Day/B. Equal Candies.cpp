//https://codeforces.com/contest/1676/problem/B
#include<bits/stdc++.h>
using namespace std;
int main() 
{
   int t; cin >> t;
   for(int i=0;i<t;i++)
   {
    int n; cin >> n;
    vector<int>arr(n);
    int min_candies=INT_MAX;
    int ans=0;
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
        min_candies=min(min_candies,arr[j]);
    }
    for(int j=0;j<n;j++)
      ans+=arr[j]-min_candies;
    cout<<ans<<"\n";
   }
   return 0;
}
