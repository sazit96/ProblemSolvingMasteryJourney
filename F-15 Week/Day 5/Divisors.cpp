#include<bits/stdc++.h>
using namespace std; 
const int mx=1000000;
int divisor[mx+10];
int cnt;
vector <int> prime_factors[mx+10];
void sieve()
{
    for(int i=1;i<=mx;i++)
    {
        for(int j=i;j<=mx;j+=i) divisor[j]++;
    }
    for(int i=2;i<=mx;i++)
    {
        if(prime_factors[i].size()==0)
        {
            for(int j=i;j<=mx;j+=i) prime_factors[j].push_back(i);
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    for(int i=1;i<=mx;i++)
    {

        int x=divisor[i];
        if(prime_factors[x].size()==2 && prime_factors[x][0] * prime_factors[x][1] == x )
        {

           cnt++;
        if(cnt%9 == 0) cout << i <<  "\n";
        }
    }
    return 0;
}