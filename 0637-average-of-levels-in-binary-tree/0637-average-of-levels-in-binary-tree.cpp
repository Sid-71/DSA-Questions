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
    vector<double> averageOfLevels(TreeNode* root) {
        if(root == NULL)
        {
            return {};
        }
       queue<TreeNode*>q;
        q.push(root);
        vector<double>res;
        while(!q.empty())
        {
            int vall = q.size();
            long long  sum=0;
            int t = vall;
            while(t--)
            {
             auto to = q.front();
                q.pop();
                if(to->left){
                    q.push(to->left);
                }
                if(to->right)
                {
                    q.push(to->right);
                }
             sum += to->val;   
            }
            res.push_back((double)sum/vall);
        }
        return res;
    }
};