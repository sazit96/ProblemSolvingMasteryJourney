//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,m; cin >> n >> m;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
      cin >> arr[i];
    vector<int>freq(m,0);
    for(int i=0;i<n;i++)
    {
      int num=arr[i];
      freq[num-1]++;
    }
    for(int i=0;i<m;i++)
      cout<<freq[i]<<'\n';
    return 0;
}
