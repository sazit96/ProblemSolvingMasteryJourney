//https://www.codechef.com/START98D/problems/MVR
1#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int a,b,x,y; cin >> a >> b >> x >> y;
    int messi =a*2+b,ronaldo=x*2+y;
    if(messi>ronaldo) cout << "Messi\n";
    else if(messi<ronaldo) cout << "Ronaldo\n";
    else cout << "Equal\n";
    return 0;
}