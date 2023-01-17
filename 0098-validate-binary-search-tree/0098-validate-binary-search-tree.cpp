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
    
    bool helper(long long  mini, long long  maxi,TreeNode*root)
    {
        if(root == NULL)return true;
        
        long long  v = root->val;
        if(v < mini or v > maxi)
        {
            return false;
        }
        bool f1 = helper(mini,v-1,root->left);
        bool f2 = helper(v+1,maxi,root->right);
      return (f1 && f2);
    }
    
    bool isValidBST(TreeNode* root) {
        if(root == nullptr){
  return true;
         }
        if(root ->left == NULL and root->right == NULL)
        {
            return true;
        }
    long long  mini  = INT_MIN;
    long long  maxi = INT_MAX;
    return helper(mini,maxi,root);
    }
};