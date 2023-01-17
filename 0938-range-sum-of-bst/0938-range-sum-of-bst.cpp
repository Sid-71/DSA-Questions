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
    void helper(TreeNode*root,int l,int r,int &sum)
    {
        if(root == NULL)return;
        int cval = root->val;
        if(cval>= l and cval<=r){
            sum += cval;
        }
        helper(root->left,l,r,sum);
        helper(root->right,l,r,sum);

    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        helper(root,low,high,sum);
        return sum;
    }
};