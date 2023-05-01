class Solution {
public:
    
    int memo[1002][1002];
    
    int lcs(int i,int j,string &a, string &b)
    {
        
        if(i == a.size() or j == b.size())
        {
            return 0;
        }
        if(memo[i][j] != -1)
        {
            return memo[i][j];
        }
        if(a[i] == b[j])
        {
            return (memo[i][j] =  1 + lcs(i+1,j+1,a,b));
        }
       int ans = max(lcs(i+1,j,a,b),lcs(i,j+1,a,b));
        return memo[i][j] = ans;
    }
    int longestPalindromeSubseq(string s) {
        string b = s;
        reverse(b.begin(),b.end());
        memset(memo,-1,sizeof(memo));
        
        return lcs(0,0,s,b);
    }
};