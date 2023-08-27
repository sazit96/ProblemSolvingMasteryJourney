#include<bits/stdc++.h>
using namespace std; 
void test_cases()
{
     int n; cin >> n; 
        vector<int>a(n);
        vector< pair<int,int> > all;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            all.push_back({a[i], i});
        }
        sort (all.begin(), all.end());
        vector<int>b(n),c(n);
        set<int>st1,st2;
        for(int i=1; i<=n; i++)
        {
            st1.insert(i);
            st2.insert(i);
        }
        for(auto it: all)
        {
            int now=it.first , idx=it.second;
            if(st1.find(now) != st1.end())
            {
                b[idx]=now;
                c[idx]= *st2.begin();
                if(c[idx] > b[idx])
                {
                    cout << "NO\n";
                    return ;
                }
                st1.erase(b[idx]);
                st2.erase(c[idx]);
            }
            else if(st2.find(now) != st2.end())
            {
                b[idx]=*st1.begin();
                c[idx]=now;
                if(b[idx] > c[idx])
                {
                    cout << "NO\n";
                    return ;
                }
                st1.erase(b[idx]);
                st2.erase(c[idx]);
            }
            else
            {
                cout << "NO\n";
                return ;
            }
        }
        cout << "YES\n";
        for(int i:b) cout << i << " ";
        cout << "\n";
        for(int i:c) cout << i << " ";
        cout << "\n";
}
int32_t main()
{
#ifndef APURBA
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif

    int t=1;
    cin>>t;
    while(t--)
    {
        test_cases();
    }
    return 0;
}