https://leetcode.com/problems/partition-equal-subset-sum/


class Solution {
public:
    vector<vector<int>>dp;
    int partition_subset_sum(vector<int>nums,int sum,int i )
    {
        
        if(sum==0)
            return 1;
       if(i<0)
           return 0;
        if(dp[i][sum]!=-1)
            return dp[i][sum];
        
        if(nums[i]>sum)
        {
            dp[i][sum]=partition_subset_sum(nums,sum,i-1);
        }
        else
        {
            dp[i][sum]=partition_subset_sum(nums,sum-nums[i],i-1)|| partition_subset_sum(nums,sum,i-1);
        }
        return dp[i][sum];
    }
    
    bool canPartition(vector<int>& nums) {
        
        int sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        
        if(sum%2!=0)
            return false;
        int n=nums.size();
        sum/=2;
        dp.resize(n+1,vector<int>(sum+1));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
                dp[i][j]=-1;
        }
       // memset(dp,-1,sizeof(dp));
        return partition_subset_sum(nums,sum,n-1);
        
        
    }
};
