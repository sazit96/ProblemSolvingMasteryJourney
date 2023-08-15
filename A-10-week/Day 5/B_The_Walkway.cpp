#include<bits/stdc++.h>
using namespace std;
#define int long long

int fun(int x, int y, int d){
    bool temp = ((y-x)%d)==0;
    return (y-x)/d+1-temp;
}

signed main(){
    int t; cin>>t;
    while(t--){
        int n,m,d; cin>>n>>m>>d;
        vector<int>v(m);
        for(int i=0; i<m; i++) cin>>v[i];
        int start=0;
        if(v[0]!=1){
            start=1;
            v.insert(v.begin(),1);
        }
        v.push_back(n+1);
        n=v.size();
        int ans=0;
        for(int i=1; i<n; i++)
        ans+=fun(v[i-1],v[i],d);
        int a2=ans;
        int newans=ans;
        for(int i=1; i<n-1; i++){
            int cur=fun(v[i-1],v[i+1],d)-fun(v[i-1],v[i],d)-fun(v[i],v[i+1],d);
            newans=a2+cur;
            ans=min(ans,newans);
        }
        int count=0;
        for(int i=1; i<n-1; i++){
            int cur=fun(v[i-1],v[i+1],d)-fun(v[i-1],v[i],d)-fun(v[i],v[i+1],d);
            newans=a2+cur;
            if(newans==ans) count++;
        }
        if(ans==a2 && start==0)
        count++;
        cout<<ans<<" "<<count<<endl;
    }
    return 0;
}