#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int>res;
        int power_two=1;
        while(power_two < n)
        {
            res.push_back(power_two);
            power_two *= 2;
        }
        int lest_element = res[res.size()-1];
        int remaining = n-lest_element;
        bool EnD =false;
        if(remaining % 2)
        {
            EnD=true;
            remaining--;
        }
        for(int i= 31; i>=0;i--)
        {
            int bit= remaining & (1 << i);
            if(bit)
            {
                lest_element += pow(2,i);
                res.push_back(lest_element);
            }
        }
        if(EnD) res.push_back(n);
        int Num_ele=res.size();
        cout << Num_ele << "\n";
        for(int i=Num_ele-1;i>=0;i--) cout << res[i] << " ";
        cout << "\n";
    }
    return 0;
}