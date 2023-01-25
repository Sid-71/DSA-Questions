class Solution {
public:
    
    vector<int> bfs(vector<vector<int>>&gr,int s)
    {
        int n = gr.size();
    vector<bool> vis(n, false);
    vector<int> distance(n, -1);
    queue<int> q;
    q.push(s);
    vis[s] = true;
    distance[s] = 0;
    while (!q.empty())
    {
        int first = q.front();
        q.pop();
        for (auto x : gr[first])
        {
            if (!vis[x])
            {
                q.push(x);
                distance[x] = distance[first] + 1;
                vis[x] = true;
            }
        }
    }
    return distance;
    }
    
    
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<vector<int>> gr(n);
        for(int i=0; i<edges.size(); i++)
        {
            
            int x = i;
            int y = edges[i];
            if(y == -1)continue;
            gr[x].push_back(y);
        }
        auto d1 = bfs(gr,node1);
        auto d2 = bfs(gr,node2);
        
  
       int min = INT_MAX;
        int node = -1;
        for(int i=0; i<n; i++)
        {
            if(d1[i]!= -1 and d2[i] != -1)
            {
                int val =max(d1[i],d2[i]);
                if(val < min)
                {
                    min = val;
                    node = i;
                }
            }
        }
        
        
        return node;
       
        
    }
};