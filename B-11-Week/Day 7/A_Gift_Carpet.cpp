#include<bits/stdc++.h>
using namespace std;
bool contains(char letter, int col, const vector<string>& carpet) 
{
  for (int i = 0; i < carpet.size(); i++) {
    if (carpet[i][col] == letter) {
      return true;
    }
  }
  return false;
}
bool vikaLikes(const vector<string>& carpet)
{
  char name[4] = {'v', 'i', 'k', 'a'};
  int index = 0;
  int m = carpet[0].size();
  for (int j = 0; j < m; j++) {
    if (contains(name[index], j, carpet)) {
      index++;
      if (index == 4) {
        return true;
      }
    }
  }
  return false;
}
int main() 
{
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<string> carpet(n);
    for (int i = 0; i < n; i++) {
      cin >> carpet[i];
    }
    if (vikaLikes(carpet)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}