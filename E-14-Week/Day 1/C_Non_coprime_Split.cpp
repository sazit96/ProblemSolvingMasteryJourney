#include<bits/stdc++.h>
using namespace std; 
void test_case()
{
    int l,r; cin >> l >> r; 
        if((r/2) + (r/2) >= l && (r/2) + (r/2)!=2)
         cout << r/2 << " " << r/2 <<"\n";
        else 
        {
            for(int i=2;i*i <=r;i++)
            {
                if((__gcd(r-i,i)>=2)) 
                {
                    cout << r-i << " " << i << "\n";
                    return;
                }
            }
            cout << "-1\n";
        }
}
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        test_case();
    }
    return 0;
}