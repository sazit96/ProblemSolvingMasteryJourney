#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s; 
        char a= *min_element(s.begin(),s.end());
        cout << a << " ";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==a) a=0;
            else cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}