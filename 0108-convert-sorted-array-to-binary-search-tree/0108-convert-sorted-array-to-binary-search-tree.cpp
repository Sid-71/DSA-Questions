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
    TreeNode* helper(int low, int high, vector<int>&a)
    {
        if(low > high)return NULL;
        int mid =( low + high)/2;
        TreeNode*root = new TreeNode(a[mid]);
        if(low == high){
            return root;
        }
        root->left = helper(low,mid-1,a);
        root->right = helper(mid+1,high,a);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& a) {
        int low =0;
        int high = a.size()-1;
        return helper(low,high,a);
    }
};