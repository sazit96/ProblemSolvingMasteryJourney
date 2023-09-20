// n divisors and sum of all divisors.
#include<bits/stdc++.h>
using namespace std; 
int one_to_N_DivisorsSum(int n)
{
    //ex: n=20 sum=1+2+4+5+10=22;
    if(n<2) return 0;
    int sum=1;
    for(int i=2; i*i<=n; i++)
    {
        if(i*i==n) sum+=i;
        else if(n%i==0) sum+=i,sum+=(n/i);
    }
    return sum;
}
void TEST_CASE()
{
    int n; cin >> n; 
    cout << one_to_N_DivisorsSum(n) << "\n";
}
int main ()
{
    int t; cin >> t; 
    while(t--)
    {
        TEST_CASE();
    }
    return 0;
}