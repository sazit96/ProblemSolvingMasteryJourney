//https://www.codechef.com/problems/BLOBBYVOLLEY?tab=statement
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s;
        cin >> s; 
        int alice=0,bob=0;
        char server='A';
        for(int i=0;i<n;i++)
        {
            if(s[i]==server) 
            {
                if(s[i]=='A') alice++;
                else bob++;
            }
            else 
            {
                if(server=='A') server ='B';
                else server ='A';
            }
        }
        cout << alice << " " << bob << "\n";
    }
}