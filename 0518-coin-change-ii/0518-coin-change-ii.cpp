class Solution {
public:
    
   int solve(vector<int>&coins,int k,int ind)
   {
    if(k == 0)return 1;
    if(ind < 0 or k<0)return 0;
    
     int iskoLelo = solve(coins,k-coins[ind], ind);
     int nhiLo = solve(coins,k,ind-1);
      return iskoLelo+nhiLo;
   }
    
    
    int change(int amount, vector<int>& coins) {
       int n = coins.size();
//       return solve(coins,amount,n-1);  
    int dp[n+1][5001];
    memset(dp,0,sizeof(dp));
    for(int i=0; i<n; i++)
    {
        dp[i][0] = 1;
    }
   
    for(int i=1;i<=n; i++)
    {
        for(int sum =0; sum <= amount; sum ++)
        {
                int nhiLo = dp[i-1][sum];
                int take =0; 
                if(sum >= coins[i-1])
                {
                    take = dp[i][sum-coins[i-1]];
                }
               dp[i][sum] = take + nhiLo;
        }
    }
        
      return dp[n][amount];  
        
    }
};