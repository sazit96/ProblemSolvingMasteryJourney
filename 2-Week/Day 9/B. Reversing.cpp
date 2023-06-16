//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B
#include<bits/stdc++.h>
using namespace std;
int main() 
{
  int n; cin >> n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  int lastZeroIndex=-1;
  for(int i=0;i<n;i++)
  {
    if(a[i]==0)
    {
      if(lastZeroIndex!=-1)
        reverse(a,a+lastZeroIndex);
      lastZeroIndex=i;
    }
  }
  if(lastZeroIndex!=-1)
    reverse(a,a+lastZeroIndex);
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
  cout<<"\n";
  return 0;
}
