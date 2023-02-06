/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root == NULL)return{};
        vector<vector<int>>ans;
        queue<Node*>q;
        q.push(root);
        while(q.size() > 0)
        {
            vector<int>curLevel;
            int val = q.size();
            while(val--)
            {
                auto cur = q.front();
                q.pop();
                curLevel.push_back(cur->val);
               for(Node* child : cur->children)
               {
                   q.push(child);
               }
            }
            ans.push_back(curLevel);
        }
        return ans;
    }
};