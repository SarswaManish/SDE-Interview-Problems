https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int numrows) {
        
        vector<vector<int>>res;
        vector<int>vv;
        if(numrows==0)
            return res;
        vv.push_back(1);
        res.push_back(vv);
    
        numrows-=1;
        for(int i=0;i<numrows;i++)
        {
            vector<int>v;
            v.push_back(1);
            for(int j=1;j<res[i].size();j++)
            {
                v.push_back(res[i][j]+res[i][j-1]);
            }
            v.push_back(1);
            res.push_back(v);
            
        }
        return res;
    }
};
