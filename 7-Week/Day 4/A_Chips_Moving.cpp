#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int n; cin >> n;
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        int x; cin >> x;
        if(x%2==0) e++;
        else o++;
    }
    cout << min(e,o) << "\n";
    return 0;
}