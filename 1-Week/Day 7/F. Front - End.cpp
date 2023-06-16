//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin >> n;
    deque<int>dq;
    for(int i=0;i<n;i++)
    {
      int num;
      cin>>num;
      dq.push_back(num);
    }
    while(!dq.empty())
    {
      cout<<dq.front()<<" ";
      dq.pop_front();
      if(!dq.empty())
      {
        cout<<dq.back()<<" ";
        dq.pop_back();
      }
    }
    cout<<endl;
    return 0;
}
