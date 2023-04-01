class Solution {
public:
      string shiftingLetters(string s, vector<vector<int>>& shifts) {
      int n = s.size();
      // dp[i] indicates whether
      vector<int> dp(n+1, 0);
      // offline processsing for range updates and point query.
      for (const auto& x : shifts) {
        int start = x[0], end = x[1], direction = x[2];
        if (direction == 1) {
          ++dp[start];
          --dp[end+1];
        } else if (direction == 0) {
          --dp[start];
          ++dp[end+1];
        }
      }
      for (int i = 1; i <= n; ++i) {
        dp[i] += dp[i-1];
      }
      
      for (int i = 0; i < n; ++i) {
        // handle negative values, -2700, 'a' - 26 => 'a' move -1 = 'z'
        // abs(-27) % 26 = -1 + 26 % 26 = 25 'a'+ 25 = 'z' 
        if (dp[i] < 0) dp[i] = (-(abs(dp[i]) % 26) + 26) % 26;
        s[i] = (char)('a' + (s[i] -'a' + dp[i] + 26) % 26);
      }
      return s;
    }
};