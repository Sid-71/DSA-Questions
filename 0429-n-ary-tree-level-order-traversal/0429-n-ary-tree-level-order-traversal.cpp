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
        vector<vector<int>>res;
        if(root == NULL)
        {
         return res;   
        }
        queue<Node*>q;
        
        q.push(root);
        
     
        while(!q.empty())
        {
            int val = q.size();
            vector<int>ans;
            while(val--)
            {
                auto to = q.front();
                ans.push_back(to->val);
                q.pop();
                auto temp = to->children;
                for(auto x : temp)
                {
                    q.push(x);
                }
            }
            res.push_back(ans);
        }
        return res;
    }
};