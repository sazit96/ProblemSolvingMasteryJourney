#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n,m,ans=0; cin >> n >> m; 
    vector<string>s(n); for(int i=0;i<n;i++) cin >> s[i];
    vector<int>a(m); for(int i=0;i<m;i++) cin >> a[i];
    for(int k=0;k<m;k++)
    {
        int cnt[5]={0};
        for(int i=0;i<n;i++) 
         cnt[s[i][k]-'A']++;
        int maxidx=0;
        for(int i=1;i<5;i++)
        {
            if(cnt[i]>cnt[maxidx])
             maxidx=i;
        }
        ans+=cnt[maxidx]*a[k];
    }
    cout << ans <<"\n";
    return 0;
}