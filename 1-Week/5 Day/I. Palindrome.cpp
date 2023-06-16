//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;cin>>n;
    int orginal_n=n;
    int reverse=0;
    while(n>0)
    {
      int digit=n%10;
      reverse=reverse*10+digit;
      n/=10;
    }
    cout<<reverse<<endl;
    if(orginal_n==reverse)
      cout<<"YES\n";
    else
      cout<<"NO\n";
    return 0;
}