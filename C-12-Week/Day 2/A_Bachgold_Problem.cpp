#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int k; cin >> k; 
    if(k%2==0)
    {
        cout << k/2 << "\n";
        for(int i=0;i<k/2;i++) cout << "2 ";
        cout << "\n";
    }
    else 
    {
        cout << k/2 << "\n";
        cout << "3 ";
        for(int i=0;i<k/2-1;i++) cout << "2 ";
        cout << "\n";
    }
    return 0;
}