
https://leetcode.com/problems/sort-colors/

class Solution {
public:
    // we are going to solve this problem using dutch national falg algorithm
    
    void sortColors(vector<int>& nums) {
  
        
        int l,mid,high;
        int n=nums.size();
        l=0,mid=0,high=n-1;
        
    while(mid<=high)
    {
            if(nums[mid]==0)
            {
                swap(nums[mid++],nums[l++]);
            }
            else if(nums[mid]==1)
                mid++;
            else
            {
             swap(nums[mid],nums[high]);
                high--;
            }
                                
    }
    
        
        
        
    }
};
