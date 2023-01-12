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
    int par;
    bool helper(TreeNode* root){
        if(root == NULL)return true;
        int curr = root->val;
        if(curr != par)return false;
        int lefc = helper(root->left);
        int rc =  helper(root->right);
        if(lefc  and rc )
        {
        return true;    
        }
        return false;
        
    }
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL)return 1;
        par = root->val;
        return helper(root);
    }
};