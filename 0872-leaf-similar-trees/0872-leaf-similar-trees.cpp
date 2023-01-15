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
    void helper(TreeNode*a,vector<int>&r1)
    {
        if(a== nullptr)return;
        if(a->left == nullptr and a->right == nullptr)
        {
            r1.push_back(a->val);
            return ;
        }
        helper(a->left,r1);
        helper(a->right,r1);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      
        vector<int>r1,r2;
        helper(root1,r1);
        helper(root2,r2);

        if(r1.size() != r2.size())return false;
        for(int i=0; i<r1.size(); i++)
        {
            if(r1[i] != r2[i])return false;
        }
        return true;
        
    }
};