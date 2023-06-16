//https://codeforces.com/problemset/problem/440/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> watched_episodes(n - 1);
    unordered_set<int> episodes_set;
    for (int i = 0; i < n - 1; i++) {
        cin >> watched_episodes[i];
        episodes_set.insert(watched_episodes[i]);
    }
    int missing_episode = 0;
    for (int i = 1; i <= n; i++) {
        if (episodes_set.find(i) == episodes_set.end()) {
            missing_episode = i;
            break;
        }
    }
    cout << missing_episode << endl;
    return 0;
}