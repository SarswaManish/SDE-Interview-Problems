https://leetcode.com/problems/set-matrix-zeroes/


class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        
        int n=a.size();
        int cal=false;
        int c1=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<a[i].size();j++)
            {
                //cout<<a[i][j]<<" ";
                if(a[i][0]==0 && j==0)
                    cal=true;
                if(a[0][j]==0 && i==0)
                    c1=true;
                if(a[i][j]==0)
                {
                    a[i][0]=0;
                    a[0][j]=0;
                }
            
            
            }
           // cout<<endl;
        }
       
        
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<a[0].size();j++)
        //         cout<<a[i][j]<<" ";
        //     cout<<endl;
        // }
        
       for(int i=n-1;i>=0;i--)
       {
           for(int j=a[i].size()-1;j>=0;j--)
           {
               if(i==0 || j==0)
               {
                   if(j==0 && cal==true)
                   {
                       a[i][j]=0;
                   }
                   if(i==0 && c1==true)
                       a[i][j]=0;
               }
               else if(a[i][0]==0 || a[0][j]==0)
                   a[i][j]=0;
           }
       }
        
    }
};
