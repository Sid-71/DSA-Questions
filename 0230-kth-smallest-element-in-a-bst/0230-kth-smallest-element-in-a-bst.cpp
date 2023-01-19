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
   void helper(TreeNode*root,int k, int &vall,int &ans)
   {
     if(root == NULL)return;
     helper(root->left,k,vall,ans);
     vall++;
     if(vall == k)
     {
       ans = root->val;
        return;
     }
     helper(root->right,k,vall,ans);
   }

    int kthSmallest(TreeNode* root, int k) {
        int val =0;
        int ans =0;
        helper(root,k,val,ans);
        return ans;
    }
};