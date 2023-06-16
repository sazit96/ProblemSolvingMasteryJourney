//https://codeforces.com/problemset/problem/1604/A
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans=0;
        int x[n];
        for(int i=1;i<=n;i++)
        {
            cin>>x[i];
            if(x[i]>i)
              ans=max(ans,x[i]-i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
