class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int ans =1;
       vector<vector<bool>>dp(n,vector<bool>(n,false));
       string res ="";
        res +=s[0];
      for(int gap =0; gap<n; gap ++ )
      {
          for(int i=0, j=gap; j<n; j++,i++)
          {
             if(gap == 0)
             {
                 dp[i][j] = true;
             }
             else if(gap == 1)
             {
                 if(s[i] == s[j]){
                     dp[i][j] = 1;
                     if(2 > res.size())
                     {
                         res = s.substr(i,2);
                     }
                 }
             }
             else {
                 if(s[i] == s[j]){
                    int val = dp[i+1][j-1];
                     dp[i][j] = val;
                     if(val)
                     {
                         int len = j-i+1;
                         if(len > res.size())
                         {
                             res = s.substr(i,len);
                         }
                         
                     }
                 }
             }
          }
      }
        
     
        return res;
    }
};