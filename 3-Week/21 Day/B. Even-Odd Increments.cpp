//https://codeforces.com/contest/1744/problem/B
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n, q;
        cin >> n >> q;
        int  a;
        int evenCount = 0, oddCount = 0;
        long long sum=0;
        for (int i = 0; i < n; i++) 
        {
            cin >> a; 
            if (a % 2 == 0)
            {
                evenCount++;
                sum+=a;
            }
            else
            {
                oddCount++;
                sum+=a;
            }
        }
        while (q--) 
        {
            int type, x;
            cin >> type >> x;
            if(type==1)
            {
                sum+=oddCount*x;
                if(x&1)
                {
                    evenCount+=oddCount;
                    oddCount=0;
                }
            }
            else
            {
                sum+=evenCount*x;
                if(x&1)
                {
                    oddCount+=evenCount;
                    evenCount=0;
                }
            }
            cout << sum << "\n";
        }
    }
    
    return 0;
}
