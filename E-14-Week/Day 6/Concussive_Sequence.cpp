#include<bits/stdc++.h>
using namespace std;
vector<int> rearrange_concussive(int N, vector<int> A)
{
    sort(A.begin(), A.end());
    vector<int> result(N, 0);
    for (int i = 1; i < N; i += 2) 
    {
        result[i] = A.back();
        A.pop_back();
    }
    for (int i = 0; i < N; i += 2) 
    {
        result[i] = A.back();
        A.pop_back();
    }
    for (int i = 1; i < N - 1; ++i) 
    {
        if (!((result[i - 1] < result[i] && result[i] > result[i + 1]) || (result[i - 1] > result[i] && result[i] < result[i + 1]))) 
        {
            return {-1};
        }
    }
    return result;
}
int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) 
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) 
        {
            cin >> A[i];
        }
        vector<int> rearranged_seq = rearrange_concussive(N, A);
        if (rearranged_seq[0] == -1) 
        {
            cout << -1 << endl;
        } 
        else 
        {
            for (int i = 0; i < N; ++i) 
            {
                cout << rearranged_seq[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
