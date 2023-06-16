//https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    unordered_set<char>x;
    for(int i=0;i<s.size();i++)
      x.insert(s[i]);
    for(char c='a';c<='z';c++)
    {
        if(x.find(c)==x.end())
        {
            cout<<c<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}