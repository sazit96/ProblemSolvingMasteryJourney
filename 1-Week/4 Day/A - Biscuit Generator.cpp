//https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,t;
    cin>>a>>b>>t;
    int interval=floor((t+0.5)/a);
    int totalBiscuit=b*interval;
    cout<<totalBiscuit<<"\n";
}