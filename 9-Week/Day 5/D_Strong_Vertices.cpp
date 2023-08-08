#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int mx = -2e9;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            mx = max(mx, a[i] - b[i]);
        }
        for (int i = 0; i < n; i++) {
            if (a[i] - b[i] == mx) {
                ans.push_back(i+1);
            }
        }
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
