
https://leetcode.com/problems/maximum-product-subarray/


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int min_till_now=nums[0];
        int max_till_now=nums[0];
        int res=nums[0];
        
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            int y=max_till_now*nums[i];
            int z=min_till_now*nums[i];
            max_till_now=max(nums[i],max(y,z));
            
            min_till_now=min(nums[i],min(y,z));
            res=max(res,max(max_till_now,min_till_now));
            
        }
        
        return res;
        
    }
};
