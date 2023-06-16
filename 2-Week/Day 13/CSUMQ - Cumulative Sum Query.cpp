//https://www.spoj.com/problems/CSUMQ/
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin >>n;
    vector<int>num(n);
    for(int i=0;i<n;i++)
      cin >> num[i];
    int q; cin >> q;
    vector<int>prefixSum(n+1,0);
    for(int i=0;i<n;i++)
      prefixSum[i+1]=prefixSum[i]+num[i];
    for(int k=0;k<q;k++)
    {
        int i,j;
        cin>> i >> j;
        int sum=prefixSum[j+1]-prefixSum[i];
        cout<< sum <<"\n";
    }
    return 0;
}