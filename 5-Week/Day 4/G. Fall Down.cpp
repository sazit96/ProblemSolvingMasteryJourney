//https://codeforces.com/contest/1669/problem/G
#include<bits/stdc++.h>
using namespace std; 
void grid_falling(vector<vector<char>>&grid)
{
    int n=grid.size(),m=grid[0].size();
    bool move=true;
    while(move)
    {
        move=false;
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='*' && grid[i+1][j]=='.')
                {
                 swap(grid[i][j],grid[i+1][j]);
                 move=true;
                }
            }
        }
    }
}
int main ()
{
    int t; cin >> t; 
    while (t--)
    {
        int n,m; cin >> n >> m; 
        vector<vector<char>>grid(n,vector<char>(m));
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> grid[i][j];
        grid_falling(grid);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout << grid[i][j];
            }
            cout << "\n";
        }
    }
    return 0;
}