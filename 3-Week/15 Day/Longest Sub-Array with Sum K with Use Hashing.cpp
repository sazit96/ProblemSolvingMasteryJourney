//https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int sum=0,ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum==K) ans=max(ans,i+1);
            if(mp.find(sum-K)!=mp.end())
            {
                int indx=mp[sum-K];
                ans=max(ans,i-indx);
            }
            if(mp.find(sum)==mp.end()) mp[sum]=i;
        }
        return ans;
    } 

};