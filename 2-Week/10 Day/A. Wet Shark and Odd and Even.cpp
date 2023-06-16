//https://codeforces.com/problemset/problem/621/A
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int  n; cin >>n;
    vector<long long>arr(n);
    long long sum=0;
    long long minODD=LLONG_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]%2==1)
         minODD=min(minODD,arr[i]);
    }
    if(sum%2==1&&minODD!=LLONG_MAX)
      sum-=minODD;
    cout<< sum <<endl;
    return 0;
}