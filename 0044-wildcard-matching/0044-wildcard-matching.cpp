class Solution {
public:
    int n,m;
    bool solve(string &s,string &p,int i,int j,vector<vector<int>>&dp)
    {
        if(i == 0 and j == 0)return true;
        if(j == 0)return false;
        if(i == 0)
        {
            for(int k=1; k<=j; k++)
            {
                if(p[k-1] != '*')return false;
            }
            return true;
        }
        if(dp[i][j]  !=  -1){
            return dp[i][j];
        }
        
        
        if((s[i-1] == p[j-1]) or p[j-1] == '?')
        {
            return dp[i][j] = solve(s,p,i-1,j-1,dp);
        }
        if(p[j-1] == '*')
        {
            bool op1 = solve(s,p,i-1,j,dp);
            bool op2 = solve(s,p,i,j-1,dp);
            return dp[i][j] = (op1 or op2);
        }
        return dp[i][j] = false;
        
    }
    
    bool isMatch(string s, string p) {
    n = s.size();
    m = p.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    return solve(s,p,n,m,dp);
    }
};