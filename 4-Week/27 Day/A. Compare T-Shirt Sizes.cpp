#include<bits/stdc++.h>
using namespace std;
int f(string s)
{
    if(s=="M") return 0;
    else if(s.back()=='L') return s.size();
    else return -(int) s.size();
}
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        string a,b; cin >> a >> b;
        int x=f(a);
        int y=f(b);
        if(x<y) cout << '<' << "\n";
        else if( x > y) cout << '>' << "\n";
        else cout << '=' << "\n";
    }
}