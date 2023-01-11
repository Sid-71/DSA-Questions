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
    bool isSameTree(TreeNode* a, TreeNode* b) {
        if(a == NULL and b == NULL)return true;
        if(a== NULL or b == NULL)return false;
        if(a->val != b->val)
        {
            return false;
        }
        bool left = isSameTree(a->left,b->left);
        bool right = isSameTree(a->right,b->right);
        if(left and right){
            return true;
        }
        return false;
    }
};