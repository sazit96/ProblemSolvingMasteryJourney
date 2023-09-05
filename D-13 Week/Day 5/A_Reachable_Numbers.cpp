#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n; cin >> n; 
    set<int>st;
    while(1)
    {
        if(st.count(n))break;
        st.insert(n);
        n++;
        while(n%10==0) n/=10;
    }
    cout << st.size() << "\n";
    return 0;
}