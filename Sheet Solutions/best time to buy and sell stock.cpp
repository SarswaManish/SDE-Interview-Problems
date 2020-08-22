https://leetcode.com/problems/best-time-to-buy-and-sell-stock/



class Solution {
public:
    int maxProfit(vector<int>& a) {
       
        int res=0;
        if(a.size()==0)
            return res;
        int min_till_now=a[0];
        
        for(int i=1;i<a.size();i++)
        {
            if(a[i]<min_till_now)
                min_till_now=a[i];
            
            res=max(res,a[i]-min_till_now);
            
        }
        return res;
        
    }
};
