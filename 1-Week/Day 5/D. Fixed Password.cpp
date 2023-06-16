//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
#include<bits/stdc++.h>
using namespace std;
const int passward =1999;
int main ()
{
    int x;
    while(cin>>x)
    {
        if(x==passward)
        {
          cout<<"Correct\n";
          break;
        }
        else
          cout<<"Wrong\n";
    }
    return 0;
}