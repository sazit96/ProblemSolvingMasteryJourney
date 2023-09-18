#include<bits/stdc++.h>
using namespace std; 
const int maxN=1000;
vector<int> primes;
void sieve()
{
    vector<bool> is_prime (maxN+1,true);
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i*i<=maxN;i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<=maxN;j+=i)
            {
                is_prime[j]=false;
            }
        }
    }
    for(int i=2;i<=maxN;i++)
    {
        if(is_prime[i]) primes.push_back(i);
    }
}
vector<int> Pfactorization (int n)
{
    vector<int>factor;
    for(int i : primes)
    {
        if(i*i>n) break;
        while(n%i==0)
        {
            factor.push_back(i);
            n/=i;
        }
    }
    if(n>1) factor.push_back(n);
    return factor;
}
int main ()
{
    sieve();
    int n; cin >> n;
    vector<int>factorization=Pfactorization(n);
    for(int i=0;i<factorization.size();i++)
    {
        cout << factorization[i];
        if(i<factorization.size()-1) cout << "*";
    }
    cout << "\n";
    return 0;
}