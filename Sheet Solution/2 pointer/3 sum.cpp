
https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        set<vector<int>>s;
        
        int i=0;
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<=2)
            return res;
        
        
         // -1 -1 0 1 2
             
        for(int i=0;i<=n-3;i++)
        {
            int j=i+1,k=n-1;
            int sum=nums[i];
            while(j<k )
            {   
                int x=sum+nums[j]+nums[k];
                if(x==0)
                {
                    vector<int>v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    int xx=s.size();
                    s.insert(v);
                    
                    if(s.size()>xx)
                        res.push_back(v);
                    j++;
                    k--;
                }
                else if(x>0)
                    k--;
                else
                    j++;
            }
        }
        // for(auto i:s)
        // {
        //     for(auto x:i)
        //         cout<<x<<" ";
        //     cout<<endl;
        // }

            return res;
    }
};
