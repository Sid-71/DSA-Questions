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
    void helper(TreeNode*a)
    {
        if(a ==  NULL)return;
        helper(a->left);
        helper(a->right);
        TreeNode*temp = a->right;
        a->right = a->left;
        a->left = temp;
        return;
    }
  
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
        helper(root);
        return root;
        
    }
};