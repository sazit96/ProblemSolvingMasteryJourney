//https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int i=0,j=0,n=s.size(),ans=-1,unq=0;
        int frq[26]={0};
        while(j<n)
        {
            char c=s[j];
            if(frq[c-'a']==0) unq++;
            frq[c-'a']++;
            if(unq>k)
            {
                while(unq>k)
                {
                    char leftc=s[i];
                    frq[leftc-'a']--;
                    if(frq[leftc-'a']==0)unq--;
                    i++;
                }
            }
            if(unq==k) ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends