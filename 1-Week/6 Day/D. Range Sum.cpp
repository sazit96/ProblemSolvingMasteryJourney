
//https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        
        if (l <= r)
            sum = (long long)(r - l + 1) * (l + r) / 2;
        else
            sum = (long long)(l - r + 1) * (r + l) / 2;
            
        cout << sum << "\n";
    }
    
    return 0;
}
