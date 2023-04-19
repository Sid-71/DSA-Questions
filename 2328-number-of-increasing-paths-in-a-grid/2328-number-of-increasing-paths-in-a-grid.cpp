class Solution {
public:
    int n,m;
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,1,-1};
    long long mod = 1e9+7;
    
    
    long long find_paths(vector<vector<int>>&a,vector<vector<long long>>&dp,int r,int c)
    {
        if(dp[r][c] != -1){
            return dp[r][c];
        }
        long long  sum =0;
        for(int k=0; k<4; k++)
        {
            int rr = r + dx[k];
            int cc = c + dy[k];
            if(rr<0 or cc<0 or rr>=n or cc>=m)continue;
            int val = a[rr][cc];
            int curr = a[r][c];
            if(val >= curr)continue;
            sum += find_paths(a,dp,rr,cc)%mod;
            sum %= mod;
        }
        long long val = (1+ sum)%mod;
        return dp[r][c] = val;
    }
    
    
    
    int countPaths(vector<vector<int>>& a) {
    n = a.size(),m=a[0].size();
    vector<vector<long long >>dp(n,vector<long long>(m,-1)); 
    long long  ans= 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(dp[i][j] == -1)
            {
                long long val = find_paths(a,dp,i,j);
               
            }
        }
    }
    
        for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            ans += dp[i][j];
            ans%=mod;
        }
           
    }
    
        return ans%mod;
    }
};