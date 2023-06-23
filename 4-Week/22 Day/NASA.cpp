//https://www.codechef.com/problems/PALIXOR?tab=statement
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool is_palindrome(int a)
{
    string s1=to_string(a);
    string s2=s1;
    reverse(s2.begin(),s2.end());
    return s1==s2;
}
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >>n; 
        vector<int>a(n);
        ll freq[35001]={0};
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        vector<int>palindrome;
        for(int i=0; i<32768; i++)
        {
            if(is_palindrome(i)) palindrome.push_back(i);
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<palindrome.size();j++)
            {
                ll k=a[i]^palindrome[j];
                if(k>32768) continue;
                ans+=freq[k];
            }
        }
        cout<< (ans+n)/2 << "\n";
    }
}