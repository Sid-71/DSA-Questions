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
    void helper(TreeNode*root,int k,int &ans,set<int>&st)
    {
        if(root == NULL)return;
        helper(root->left,k,ans,st);
        int v =root->val;
        if( st.find(k-v)!= st.end())
        { 
           if(v != k-v)
           {
               ans =1 ;
               return;
           }
         }
            st.insert(v);
        
        helper(root->right,k,ans,st);
      

    }
    
    bool findTarget(TreeNode* root, int k) {
     set<int>st;
        int ans =0;
        helper(root,k,ans,st);
      return ans;   
    }
};