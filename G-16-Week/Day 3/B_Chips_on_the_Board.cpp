#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int>a(n),b(n);;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        ll sum_a=0, sum_b=0;
        int min_a=INT_MAX, min_b=INT_MAX;
        for(int i=0;i<n;i++)
        {
            sum_a+=a[i];
            sum_b+=b[i];
            min_a=min(min_a,a[i]);
            min_b=min(min_b,b[i]);
        }
        ll result = min(min_a * (ll)n + sum_b, min_b * (ll)n + sum_a);
        cout << result << "\n";
    }
    return 0;
}