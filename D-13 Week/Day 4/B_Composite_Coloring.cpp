#include<bits/stdc++.h>
using namespace std; 
const int m=11;
vector<int>primes ={2,3,5,7,11,13,17,19,23,29,31};
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int>res(n);
        vector<int>used(m);
        for(int i=0;i<n;i++)
        {
            int a; cin >> a;
            for(int j=0;j<m;j++)
            {
                if(a%primes[j]==0)
                {
                    res[i]=j;
                    used[j]=1;
                    break;
                }
            }
        }
        int M=0;
        for(int i=0;i<m;i++)
        {
            if(used[i]) 
            {
                M++;
                used[i]=M;
            }
        }
        cout << M << "\n";
        for(int i=0;i<n;i++) cout << used[res[i]] << " ";
        cout << "\n";
    }
    return 0;
}