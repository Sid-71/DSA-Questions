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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
      if(root == NULL)
    {
    return {{}};  
    }
    int l=0;
queue<pair<TreeNode*,pair<int,int>>>q;
q.push({root,{0,l}});
map<int,multiset<pair<int,int>>>ms;
while(q.size()>0)
{
  int vx = q.size();
  l++;
  while(vx--)
  {
    auto to = q.front();
    q.pop();
    auto node = to.first;
    int val = to.first->val;
    int xc = to.second.first;
    int yc = to.second.second;
    ms[xc].insert({yc,val});
    if(node->left)
    {
      q.push({node->left,{xc-1,l}});
    }
    if(node->right){
      q.push({node->right,{xc+1,l}});
    }
  }
}
vector<vector<int>>ans;
for(auto x: ms)
{
  auto temp = x.second;
   
  vector<int>d;
    for(auto y : temp)
    {
        d.push_back(y.second);
     }
    ans.push_back(d);
    
}
return ans;
        
    }
};