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
    int ans;
    
    int helper(TreeNode*a)
    {
        if(a == NULL)return 0;
        int lefc = helper(a->left);
        int rc = helper(a->right);
        
        int vc = max({lefc,rc,lefc+rc})+1;
        ans = max(ans,vc);
        return max(lefc,rc)+1;
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
     ans =0;
     int val = helper(root);
     return ans-1;
    }
};