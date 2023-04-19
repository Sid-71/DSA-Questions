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
    int left =0;
    int right =1;
    int ans=0;
    
   int  solve(TreeNode*root, int dir)
    {
        
        if(root == NULL){
            return 0;
        }
        int left_side = solve(root->left,left);
        int right_side = solve(root->right,right);
        ans = max({ans,left_side,right_side});
        if(dir == left)
        {
            return 1  +right_side;
        }
        return 1 + left_side;
        
    }
    
    
    int longestZigZag(TreeNode* root) {
     int val = solve(root,-1);
        return ans;
    }
};