
//https://www.codechef.com/problems/DICEGAME2
#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int a1,a2,a3,b1,b2,b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        int aliceScore,bobScore;
        int alice[]={a1,a2,a3};
        sort(alice,alice+3,greater<int>());
        aliceScore=alice[0]+alice[1];
        int bob[]={b1,b2,b3};
        sort(bob,bob+3,greater<int>());
        bobScore=bob[0]+bob[1];
        if(aliceScore>bobScore) cout << "Alice\n";
        else if(aliceScore<bobScore) cout << "Bob\n";
        else cout << "Tie\n";
    }
    return 0;
}
