#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n;cin >>n;
        vector<int>a(n);
        vector<int>evenInt,oddInt,even,odd;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]%2==0){
                evenInt.push_back(i);
                even.push_back(a[i]);
            }
            else{
                oddInt.push_back(i);
                odd.push_back(a[i]);
            }
        }
        bool ans= true;
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        for(int i=0;i<evenInt.size();i++) a[evenInt[i]]=even[i];
        for(int i=0;i<oddInt.size();i++) a[oddInt[i]]=odd[i];
        for(int i=0;i<n-1;i++)  if(a[i]>a[i+1]) ans =false;
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}