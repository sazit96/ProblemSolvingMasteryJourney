//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int minFreq=arr[0];
    int minCount=0;
    for(int i=0;i<n;i++)
    {
       if (arr[i]==minFreq)
          minCount++;
       else if(minFreq>arr[i])
       {
        minFreq=arr[i];
        minCount=1;
       }
    }
    if(minCount%2==0)
      cout<<"Unlucky\n";
    else
      cout<<"Lucky\n";
}
