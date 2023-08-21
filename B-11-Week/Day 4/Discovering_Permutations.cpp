#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    for(int i=1;i<=t;i++)
    {
        int n,k; cin >> n >> k; 
        cout << "Case " << i << ":\n";
        string C="";
        for(int i=0;i<n;i++)
        {
            C+=('A'+i);
        }
        string check= C;
        for(int i=1; i<=k;i++)
        {
            cout << C << "\n";
            next_permutation(C.begin(),C.end());
            if(C== check) break;
        }
    }
    return 0;
}