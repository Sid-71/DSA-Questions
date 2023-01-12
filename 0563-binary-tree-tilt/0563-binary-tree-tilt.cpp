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
    int TreeTilt(TreeNode*a)
    {
        if(a == NULL)return 0;
     int suml = TreeTilt(a->left);
     int sumr = TreeTilt(a->right);
     ans += abs(suml-sumr);
       return suml+sumr + a->val; 
     }
    int findTilt(TreeNode* a) {
        if(a == NULL)return 0;
        ans =0;
        int x =TreeTilt(a);
        return ans;
    }
};