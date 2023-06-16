//https://atcoder.jp/contests/abc083/tasks/arc088_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long x,y; cin >> x >> y;
    int ans=0;long long currentNum=x;
    while(currentNum<=y)
    {
        ans++;
        currentNum*=2;
    }
    
    cout << ans <<"\n";
    return 0;
}