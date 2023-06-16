
//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    int charCount[26] = {0};
    for (int i = 0; i < N; i++) {
        char c;
        cin >> c;
        charCount[c - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        while (charCount[i] > 0) {
            cout << static_cast<char>(i + 'a');
            charCount[i]--;
        }
    }
    cout << endl;
    return 0;
}