//https://atcoder.jp/contests/abc121/tasks/abc121_d
#include<bits/stdc++.h>
using namespace std;
long long findXOR(long long a,long long b)
{
    long long xorA=0;
    if((a-1)%4==0) xorA=a-1;
    else if((a-1)%4==1) xorA=1;
    else if((a-1)%4==2) xorA=a;
    else xorA=0;
    long long xorB=0;
    if(b%4==0) xorB=b;
    else if(b%4==1) xorB=1;
    else if(b%4==2) xorB=b+1;
    else xorB=0;
    return xorA^xorB;
}
int main ()
{
    long long a,b; cin >> a >> b;
    cout << findXOR (a,b) << "\n";
}