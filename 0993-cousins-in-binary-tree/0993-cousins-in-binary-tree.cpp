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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        if(root->val == x or root->val == y)return false;
        q.push(root);
       map<int,int>par;
        while(q.size()> 0)
        {
            int xx=-1,yy=-1;
            int to = q.size();
            while(to--)
            {
              auto cur = q.front();
                q.pop();
                if(cur->val == x)xx =1;
                if(cur->val == y)yy = 1;
                if(cur->left){
                    par[cur->left->val] = cur->val;
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                    par[cur->right->val] = cur->val;
                }
             }
            if(xx!=-1 and yy != -1)
            {
                return (par[x]!=par[y]);
            }
        }
        return false;
    }
};