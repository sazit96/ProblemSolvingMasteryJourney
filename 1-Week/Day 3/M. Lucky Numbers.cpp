//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
#include<bits/stdc++.h>
using namespace std;
bool isLucky(int num)
{
    while (num>0)
    {
        int digit=num%10;
        if(digit!=4&&digit!=7)
          return false;
        num/=10;
    }
    return true;
}
int main ()
{
    int a,b;
    cin>>a>>b;
    bool foundlucky=false;
    for(int i=a;i<=b;i++)
    {
        if(isLucky(i))
        {
            cout<<i<<" ";
            foundlucky=true;
        }
    }
    if(!foundlucky)
      cout<<-1;
    cout<<endl;
    return 0;
}