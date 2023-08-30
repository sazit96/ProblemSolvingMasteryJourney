#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,k; cin >> n >> k;
        if(k>n) k= k%(n+1);
        vector<int>a(n+1),a2(n+1,0);
        int mx=-1;
        for(int i=1;i<=n;i++)
        {
            cin >> a[i];
            a2[a[i]]++;
        }
        for(int i=0;i<=n;i++)
        {
            if(a2[i]==0)
            {
                mx=i;
                break;
            }
        }
        a[0]=mx;
        for(int i=0;i<=n;i++)
        {
            if(n<(i+k)) a2 [(i+k)%(n+1)] = a[i];
            else a2[i+k]=a[i];
        }
        for(int i=1;i<=n;i++) cout << a2[i] << " ";
        cout << "\n";
    }
    return 0;
}