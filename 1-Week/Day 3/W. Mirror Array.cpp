//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W
#include <iostream>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    int arr[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M / 2; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][M - j - 1];
            arr[i][M - j - 1] = temp;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
