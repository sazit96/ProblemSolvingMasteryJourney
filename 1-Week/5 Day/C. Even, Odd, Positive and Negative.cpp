//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    int even_count=0,odd_count=0,positive_count=0,nagative_count=0;
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
      if(arr[i]%2==0)
        even_count++;
      else
        odd_count++;
      if(arr[i]>0)
        positive_count++;
      else if(arr[i]<0)
        nagative_count++;
    }
    cout<<"Even: "<<even_count<<"\n";
    cout<<"Odd: "<<odd_count<<"\n";
    cout<<"Positive: "<<positive_count<<"\n";
    cout<<"Negative: "<<nagative_count<<"\n";
    return 0;
}