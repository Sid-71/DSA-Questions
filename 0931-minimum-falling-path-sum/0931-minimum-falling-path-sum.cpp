class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& a) {
      int n = a.size();
      vector<vector<int>>dp(n,vector<int>(n));
      for(int i=0; i<n; i++)
      {
          dp[0][i] = a[0][i];
      }
      for(int i=1; i<n; i++)
      {
         for(int j=0; j<n; j++)
         {
             
         int extra = dp[i-1][j];
         if(j-1>=0)
         {
             extra = min(extra,dp[i-1][j-1]);
         }
         if(j+1<n)
         {
             extra = min(extra,dp[i-1][j+1]);
         }
         dp[i][j] = a[i][j] + extra;  
         }
      }
      return *min_element(dp[n-1].begin(),dp[n-1].end());
      
    }
};