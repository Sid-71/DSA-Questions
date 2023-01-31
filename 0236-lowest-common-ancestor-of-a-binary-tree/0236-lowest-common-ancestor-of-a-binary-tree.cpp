/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if(!root)return NULL;
      
        if(root->val == p->val or root->val == q->val)
        {
            
            return root;
        }
       TreeNode*a =  helper(root->left,p,q);
        TreeNode*b = helper(root->right,p,q);
        if(a and b)
        {
            return root;
        }
        if(a == NULL)return b;
        return a;
        
                 
        
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode*ca = NULL,*cb = NULL,*lca = NULL;
        
        return helper(root,p,q);
    }
};