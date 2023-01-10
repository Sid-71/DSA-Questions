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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        if(root == NULL)
        {
            return {};
        }
        vector<vector<int>> res;
        q.push(root);
        int t =0;
        while(q.size())
        {
            int val = q.size();
            vector<int>ans;
            while(val--)
            {
                auto currNode = q.front();
                q.pop();
                ans.push_back(currNode->val);
                if(currNode->left != NULL)
                {
                 q.push(currNode->left);   
                }
                if(currNode->right != NULL)
                {
                 q.push(currNode->right);   
                }
            }
            if(t%2)
            {
                reverse(ans.begin(),ans.end());
            }
            res.push_back(ans);
            t++;
        }
        return res;
    }
};