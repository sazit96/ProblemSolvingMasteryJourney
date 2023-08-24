#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int> a(n); for(int i=0;i<n;i++) cin >> a[i];
        if(*max_element(a.begin(),a.end())>n)
        {
            cout << "NO\n";
            continue;
        }
        vector<int> prefixsum(n+1,0);
        for(int i=0;i<n;i++)
        {
            prefixsum[0]++;
            prefixsum[a[i]]--;
        }
        int runningSum=0;
        for(int i=0;i<n;i++)
        {
            runningSum+=prefixsum[i];
            prefixsum[i]=runningSum;
        }
        bool isSymmetrical =true; 
        for(int i=0;i<n;i++)
        {
            if(prefixsum[i]!=a[i])
            {
                isSymmetrical= false;
                break;
            }
        }
        if(isSymmetrical) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}