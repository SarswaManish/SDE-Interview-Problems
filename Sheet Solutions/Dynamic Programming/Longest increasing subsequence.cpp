https://leetcode.com/problems/longest-increasing-subsequence/


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        int n=nums.size();
        vector<int>dp(n,0);
        int res=0;
        for(int i=0;i<n;i++)
        {
            int ma=0;
            for(int j=i-1;j>=0;j--)
            {
                if(nums[i]>nums[j])
                    ma=max(ma,dp[j]);
            }
            dp[i]=ma+1;
            res=max(res,dp[i]);
        }
        return res;
        
    }
};
