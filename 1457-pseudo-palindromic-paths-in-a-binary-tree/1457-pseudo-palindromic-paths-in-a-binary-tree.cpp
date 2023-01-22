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
    void helper(TreeNode*root,map<int,int>&m,int &cnt)
    {
        if(root == NULL)return;
                m[root->val]++;

        if(root->left ==NULL and root->right == NULL)
        {
            int odd =0;
            for(auto x: m)
            {
                if(x.second%2 == 0)continue;
                else odd++;
            }
            if(odd <=1)
            {
                cnt++;
            }
            m[root->val]--;
            return;
        }
        
        helper(root->left,m,cnt);
        helper(root->right,m,cnt);
        m[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int cnt =0;
        map<int,int>m;
        helper(root,m,cnt);
        return cnt;
    }
};