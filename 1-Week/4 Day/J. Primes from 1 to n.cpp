//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    bool is_prime;
    for(int i=2;i<=n;i++)
    {
        is_prime=true;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                is_prime=false;
                break;
            }
        }
        if(is_prime)
          cout<<i<<" ";
    }
    return 0;
}