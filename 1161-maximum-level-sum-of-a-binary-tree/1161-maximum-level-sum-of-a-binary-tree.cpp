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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        if(!root)
        {
            return 0;
        }
        q.push(root);
        int ans=INT_MIN;
        int id=INT_MAX;
        int level=1;
        while(q.size())
        {
        int v = q.size();
            long long  sum=0;
            while(v--)
            {
                auto curr = q.front();
                q.pop();
                sum += curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
         if(sum == ans)
         {
             id = min(id,level);
         }
        else if(sum > ans)
         {
             ans = sum;
             id = level;
         }
        
            level++;
         }
        return id;
    }
};