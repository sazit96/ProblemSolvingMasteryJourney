//https://www.spoj.com/problems/INTEST/en/
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,k; cin >> n >> k;
    int count=0;
    for(int i=0;i<n;i++)
    {
        int ti;cin>>ti;
        if(ti%k==0)
          count++;
    }
    cout << count << endl;

    return 0;
}