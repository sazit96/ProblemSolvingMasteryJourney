#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n - 1; i += 2) {
        if (s[i] == s[i + 1]) {
            count++;
            s[i] = (s[i] == 'a') ? 'b' : 'a';
        }
    }
    cout << count << endl;
    cout << s << endl;
    return 0;
}
