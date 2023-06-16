//https://codeforces.com/contest/1722/problem/C
#include<bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<string> a[3];
    map<string, int> mp;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < n; j++) {
        string word;
        cin >> word;
        a[i].push_back(word);
        mp[word]++;
      }
    }
    for (int i = 0; i < 3; i++) {
      int points = 0;
      for (int j = 0; j < n; j++) {
        if (mp[a[i][j]] == 1) {
          points += 3;
        } else if (mp[a[i][j]] == 2) {
          points += 1;
        }
      }
      cout << points << ' ';
    }
    cout << "\n";
  }
  return 0;
}
