class Solution {
public:
    
    // int solve(string a,string b,int i,int j)
    // {
    //     if(i<0 or j<0)return 0;
    //     if(a[i] == b[j])
    //     {
    //         return 1 + solve(a,b,i-1,j-1);
    //     }
    //     int leftKoRoko = solve(a,b,i,j-1);
    //     int rightKoRoko = solve(a,b,i-1,j);
    //     return max(leftKoRoko,rightKoRoko);
    // }
    
    
    int longestCommonSubsequence(string a, string b) {
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
};