#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        vector <long long> a(n); for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        vector<long long> result (n);
        long long sum=0;
        for(int i=n-1;i>=0;i--){
            sum+=a[i]; result[i] = sum;
        }
        for(int i=0;i<result.size();i++) cout << result[i] << " ";
        cout << "\n";
    }
    return 0;
}