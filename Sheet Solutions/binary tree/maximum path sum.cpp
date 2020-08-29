
https://leetcode.com/problems/binary-tree-maximum-path-sum/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=INT_MIN;
    
    int inorder(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        int x=inorder(root->left);
       int y=inorder(root->right);
        ans=max(ans,x+y+root->val);
        int z=max(x,y);
        if(z+root->val<0)
            return 0;
        return z+root->val;
            
    }
    
    
    int maxPathSum(TreeNode* root) {
        
        inorder(root);
        return ans;
    }
};
