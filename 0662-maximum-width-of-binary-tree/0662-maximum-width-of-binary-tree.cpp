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
    typedef  unsigned long long ll;
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,ll>>q;
        q.push({root,0}); 
        ll ans =0 ;
        while(q.size() > 0)
        {
            ll le = q.front().second;
            ll ri = q.back().second;
            ans = max(ans,ri-le+1);
            int ss = q.size();
            while(ss--)
            {
                auto curN = q.front().first;
                auto curInd = q.front().second;
                q.pop();
                if(curN->left)
                {
                    q.push({curN->left,2*curInd+1});
                }
                if(curN->right)
                {
                    q.push({curN->right,2*curInd+2});
                }
            }
        }
        return ans;
    }
};