#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,k,l; cin >> n >> k >> l;
        int mi[n],li[n];
        for(int i=0;i<n;i++) cin >> mi[i] >> li[i];
        vector<int>a;
        bool F_LI=false;
        int Lcount=0;
        for(int i=0;i<n;i++)
        {
            if(l==li[i])
            {
            a.push_back(mi[i]);
            F_LI=true;
            Lcount++;
            }
        }
        if((F_LI==false) || (k>Lcount)) 
        {
            cout << -1 << "\n";
            continue;
        } 
        sort(a.begin(),a.end(),greater<int>());
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=a[i];
        }
        cout << sum << "\n";
    }
    return 0;
}