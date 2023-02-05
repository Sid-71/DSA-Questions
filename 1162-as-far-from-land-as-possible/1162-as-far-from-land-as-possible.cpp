class Solution {
public:
    
    int dx[4]  = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n = grid.size();
        int m = grid[0].size();
        
          vector<vector<int>>distance(n,vector<int>(m,0));
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j] == 1)
                {
                    q.push({i,j});
                    distance[i][j] = 0;
                    grid[i][j] = -1;
                }
            }
        }
        if(q.size() == 0)
        {
            return -1;
        }
        int ans=0;
        while(q.size())
        {
            auto x = q.front().first;
            auto y = q.front().second;
            q.pop();
            for(int k=0; k<4; k++)
            {
                int xx = x + dx[k];
                int yy = y + dy[k];
                if(xx<0 or xx>=n or yy<0 or yy>=m or grid[xx][yy] == -1)continue;
                distance[xx][yy] = 1 + distance[x][y];
                q.push({xx,yy});
                grid[xx][yy] = -1;
                ans = max(ans,distance[xx][yy]);
            }
        }
        if(ans == 0)
        {
            return -1;
        }
      return ans;
        
        
    }
};