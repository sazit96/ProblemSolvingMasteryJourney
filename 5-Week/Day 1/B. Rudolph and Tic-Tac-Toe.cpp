#include<bits/stdc++.h>
using namespace std;
bool checkWin(char b[][3], char s) {
    for (int i = 0; i < 3; i++) {
        if ((b[i][0] == s && b[i][1] == s && b[i][2] == s) ||
            (b[0][i] == s && b[1][i] == s && b[2][i] == s))
            return true;
    }
    if ((b[0][0] == s && b[1][1] == s && b[2][2] == s) ||
        (b[0][2] == s && b[1][1] == s && b[2][0] == s))
        return true;
    return false;
}
string WhoWin(char b[][3]) {
    if (checkWin(b, 'X')) return "X";
    if (checkWin(b, 'O')) return "O";
    if (checkWin(b, '+')) return "+";
    return "DRAW";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        char c[3][3];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> c[i][j];
            }
        }
        cout << WhoWin(c) << "\n";
    }
    return 0;
}
