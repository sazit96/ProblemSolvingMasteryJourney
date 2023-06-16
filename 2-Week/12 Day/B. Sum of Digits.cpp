//https://codeforces.com/problemset/problem/102/B
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string n; cin >> n;
    int count =0;
    while (n.size()>1)
    {
        int sum=0;
        for(char digit:n)
          sum+=digit-'0';
        n=to_string(sum);
        count++;
    }
    cout << count << "\n";
    return 0;
}