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
    
    void helper(TreeNode*root,string curr,int &sum)
    {
        if(root== NULL)return;
        curr += to_string(root->val);
         if(root->left == NULL and root->right == NULL)
        {
            int val = stoi(curr);
            sum += val;
        return;
        }
        helper(root->left,curr,sum);
        helper(root->right,curr,sum);
    }
    
    int sumNumbers(TreeNode* root) {
     string curr="";
     int sum=0;
     helper(root,curr,sum);
     return sum;
    }
};