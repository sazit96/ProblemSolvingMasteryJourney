//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long factorial=1;
        for(int i=1;i<=n;i++)
          factorial=factorial*i;
        cout<<factorial<<endl;
    }
    return 0;
}