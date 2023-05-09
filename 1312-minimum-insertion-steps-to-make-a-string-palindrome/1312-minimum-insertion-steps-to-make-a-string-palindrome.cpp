class Solution {
public:
    int minInsertions(string s) {
        int dp[s.size()+1][s.size()+1];
        memset(dp,0,sizeof(dp));
        int n = s.size();
        string t(s);
        reverse(t.begin(),t.end());
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(s[i-1] == t[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int lcs = dp[n][n];
        return n-lcs;
    }
};