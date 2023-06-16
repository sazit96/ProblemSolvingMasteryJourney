//https://codeforces.com/problemset/problem/26/A
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin >> n;
    bool is_composite[3000]={false};
    int primeFactor[3000]={0};
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(!is_composite[i])
        {
            for(int j=2*i;j<=n;j+=i)
            {
                is_composite[j]=true;
                primeFactor[j]++;
            }
        }
        if(primeFactor[i]==2)
          count++;
    }
    cout<<count <<endl;
    return 0;
}