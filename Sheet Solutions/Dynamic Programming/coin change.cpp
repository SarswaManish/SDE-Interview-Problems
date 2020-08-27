https://leetcode.com/problems/coin-change/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,0);
        for(int i=1;i<=amount;i++)
        {
            int ans=INT_MAX;
            for(int j=0;j<coins.size();j++)
            {
                if(coins[j]<=i && dp[i-coins[j]]!=-1)
                {
                    ans=min(ans,dp[i-coins[j]]);
                }
            }
            if(ans==INT_MAX)
                dp[i]=-1;
            else
                dp[i]=ans+1;
        }
        return dp[amount];
        
    }
};
