class Solution {
public:
    int jump(vector<int>& nums) {
        
      vector<int>dp(nums.size()+1,0);
      int n = nums.size();
        dp[0] = 0;
     for(int i=1; i<n; i++)
     {
         dp[i] = 1e9;
         for(int j=i-1; j>=0; j--)
         {
             int kitniDur = i-j;
             int jumpKitna = nums[j];
             if(jumpKitna >= kitniDur)
             {
                dp[i] = min(dp[i],1 + dp[j]);           
             }
         }
     }
   
        return dp[n-1];
        
        
    }
};