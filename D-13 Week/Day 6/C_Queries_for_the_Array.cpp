#include<bits/stdc++.h>
using namespace std; 
void test_case()
{
    string s; cin >> s; 
    int n=s.size();
    vector<int>all;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            if(all.empty()) continue;
            if(all.back()==0) 
            {
                cout << "NO\n"; return;
            }
            for(int j=(int)all.size()-1;j>=0;j--)
            {
                if(all[j]==2) all[j]=1;
                else break;
            }
        }
        else if(s[i]=='0')
        {
            if(all.empty() || all.back()==1)
            {
                cout << "NO\n"; return;
            }
            all.back()=0;
        }
        else if(s[i]=='+')
        {
            if(all.empty()) all.push_back(1);
            else
            {
                if(all.back()==1) all.push_back(2);
                else if(all.back()==2) all.push_back(2);
                else all.push_back(0);
            }
        }
        else all.pop_back();
    }
    cout << "YES\n";
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        test_case();
    }
    return 0;
}