#include<bits/stdc++.h>
using namespace std; 
bool marked[1000];
vector<int>primes;
bool isPrime(int n)
{
    if(n<2) return false;
    if(n==2) return true; 
    if(n%2==0) return false;
    return marked[n] == false;
}
void seive(int n)
{
    for(int i=3;i*i<=n;i+=2)
    {
        if(marked[i]==false)
        {
            for(int j=i*i;j<=n;j+=i+i) marked[j]=true; 
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i)) primes.push_back(i);
    }
}
int main ()
{
    int n,k; cin >> n >> k; 
    seive(n);
    int cnt=0;
    for(int i=1;i<primes.size();i++)
    {
        int x= primes[i-1] + primes[i]+1;
        if(x<=n && isPrime(x)) cnt++;
    }
    if(cnt>=k) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}