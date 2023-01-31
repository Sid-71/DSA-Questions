class Solution {
public:
   
    bool bfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j)
    {
        int n = grid1.size();
        int m = grid1[0].size();
        queue<pair<int, int>> q;
        q.push({i, j});
        grid2[i][j] = 0;
        bool ans = true;
        while(!q.empty())
        {
            pair<int, int> temp = q.front();
            q.pop();
            int row = temp.first;
            int col = temp.second;
            vector<int> delR = {-1, 0, +1, 0};
            vector<int> delC = {0, -1, 0, +1};
            for (int i=0; i<4; i++)
            {
                int newR = row + delR[i];
                int newC = col + delC[i];
                if (newR<n and newR>=0 and newC<m and newC>=0)
                {
                    if (grid2[newR][newC]==1 and grid1[newR][newC]==0 and ans == true)
                        ans = false;
                    if (grid2[newR][newC]==1 )
                    {
                        grid2[newR][newC] = 0;
                        q.push({newR, newC});
                    }
                }
            }
        }
        return ans;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid1.size();
        int m = grid1[0].size();
        int cnt = 0;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                if (grid2[i][j] and grid1[i][j] and bfs(grid1, grid2, i, j))
                    cnt++;
            }
        }
       
        return cnt;
    }
};