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
int  maxD(TreeNode*a)
 {
     if(a == NULL)
     {
         return 0;
     }
     int lefC = maxD(a->left);
     int rigC = maxD(a->right);
     
      ans  = max(ans , 1 + max(lefC,rigC));
     return 1 + max(lefC,rigC);
 }
    int maxDepth(TreeNode* root) {
        ans =0;
        int l = maxD(root);
        return ans;
    }
};