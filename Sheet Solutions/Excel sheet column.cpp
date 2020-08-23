
https://leetcode.com/problems/excel-sheet-column-number/

class Solution {
public:
    int titleToNumber(string s) {
        int res=0;
        int n=s.length();
        int tr=1;
        for(int i=0;i<n;i++)
        {
            res+=pow(26,n-tr)*((s[i]-'A')+1);
            tr++;
            //cout<<i<<" "<<res<<endl;
            
        }
        return res;
    }
};
