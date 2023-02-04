/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
     void dfs(TreeNode*root,string &ans)
     {
         if(!root)
         {
             ans +='#';
             ans +=" ";
             return;
         }
       string temp = to_string(root->val);
         ans += temp;
         ans +=" ";
         dfs(root->left,ans);
         dfs(root->right,ans);
     }
    string serialize(TreeNode* root) {
        string ans = "";
        dfs(root,ans);
        return ans;
    }
    TreeNode* helper(vector<string>&data, int &i)
    {
        if(i<data.size() and data[i] == "#")
        {
            return NULL;
        }
        int vv = stoi(data[i]);
        TreeNode*root = new TreeNode(vv);
          i++;
        root->left = helper(data,i);
        i++;
        root->right = helper(data,i);
        return root;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
vector<string>temp;
stringstream str(data);
string word;
while(str >> word)
{
  temp.push_back(word);
}
        int i=0;
        return helper(temp,i);

    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));