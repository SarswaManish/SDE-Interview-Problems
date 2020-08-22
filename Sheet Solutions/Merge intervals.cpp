https://leetcode.com/problems/merge-intervals/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>&a) {
        vector<vector<int>>res(10005,vector<int>(2));
        vector<pair<int,int>>pi;
        for(int i=0;i<a.size();i++)
        {
            pi.push_back(make_pair(a[i][0],a[i][1]));
        }
        sort(pi.begin(),pi.end());
        if(a.size()==0)
        {
            res.resize(0,vector<int>(0));
            return res;
        
        }
        int it=0;
        res[it][0]=pi[0].first;
        res[it][1]=pi[0].second;
        int x=pi[0].second;
            
            
            
            
        for(int i=1;i<pi.size();i++)
        {
            if(pi[i].first<=x)
            {
                res[it][1]=max(pi[i].second,res[it][1]);
                x=res[it][1];
            }
            else
            {
                it++;
                res[it][0]=pi[i].first;
                res[it][1]=pi[i].second;
                x=pi[i].second;
            }
        }
        res.resize(it+1,vector<int>(2));
        return res;
    }
};
