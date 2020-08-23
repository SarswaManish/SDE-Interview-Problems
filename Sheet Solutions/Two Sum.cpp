https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        int n=nums.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            
            if(m[target-nums[i]])
            {
                v.push_back(m[target-nums[i]]-1);
                v.push_back(i);
                break;
            }
            else
            {
                m[nums[i]]=i+1;
            }
        }
        
        return v;
    }
};
