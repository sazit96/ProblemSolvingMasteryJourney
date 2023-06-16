//https://codeforces.com/problemset/problem/1669/B
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t; cin >>t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
          cin >> arr[i];
        unordered_map<int,int>countMap;
        int maxELement=-1;
        for(int i=0;i<arr.size();i++)
        {
            countMap[arr[i]]++;
            if(countMap[arr[i]]==3&&arr[i]>maxELement)
            {
                maxELement=arr[i];
            }
        }
        if(maxELement!=-1)
          cout<<maxELement << endl;
        else
          cout<<-1 <<endl;
    }
    return 0;
}