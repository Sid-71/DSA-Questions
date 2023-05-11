class Solution {
public:
    
     int longestCommonSubsequence(vector<int>&a, vector<int>& b) {
        // return solve(a,b,a.size()-1,b.size()-1);
        int solve[a.size()+1][b.size()+1];
        memset(solve,0,sizeof(solve));
        for(int i=1; i<=a.size(); i++)
        {
            for(int j=1; j<=b.size(); j++)
            {
                if(a[i-1] == b[j-1])
                {
                   solve[i][j] =  1 + solve[i-1][j-1];
                }
                else {
                    solve[i][j] = max(solve[i-1][j],solve[i][j-1]);
                }
            }
        }
        
        return solve[a.size()][b.size()];
        
    }
    
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
    return longestCommonSubsequence(nums1,nums2);    
    }
};