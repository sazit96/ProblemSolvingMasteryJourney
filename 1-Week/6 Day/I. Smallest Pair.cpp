//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int minsum=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=arr[i]+arr[j]+j-i;
            minsum=min(minsum,sum);
        }
    }
    cout<<minsum<<endl;
    }
    return 0;
}
