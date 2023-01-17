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
    bool leaf(TreeNode*root)
    {
        if(root == NULL)return false;
        if(root->left == NULL and root->right == NULL)return true;
        return false;
    }
    void helper(TreeNode*root,int &sum)
    {
        if(root == NULL)return ;
        if(leaf(root))return;
        if(leaf(root->left))
        {
            sum += (root->left)->val;
           helper(root->right,sum);
        }
        else {
        helper(root->left,sum);
        helper(root->right,sum);     
        }
        return;
            
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum =0;
        helper(root,sum);
        return sum;
    }
};