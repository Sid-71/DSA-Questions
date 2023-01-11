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
    
    bool helper(TreeNode*a,TreeNode*b)
    {
      if(a == NULL and b== NULL)
      {
          return true;
      }
       if(a == NULL)return false;
       if(b == NULL)return false;
        if(a->val != b->val)return false;
      bool x = helper(a->left,b->right);
      bool y = helper(a->right,b->left);
     if(x and y)return true;
        return false;
     }
    
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)return true;
        
    return helper(root->left,root->right);
        
    }
};