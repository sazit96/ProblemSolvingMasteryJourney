#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n,k; cin >> n >> k;
    vector<int>a(n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]>=a[k-1] && a[i]>0) count++;
        else break;
    }
    cout << count << "\n";
}