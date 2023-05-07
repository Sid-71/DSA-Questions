class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
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
       int i = a.size();
       int j = b.size();
        string ans = "";
        while(i>0 and j>0)
        {
            if(a[i-1] == b[j-1])
            {
                ans += a[i-1];
                i--;
                j--;
            }
            else if(solve[i-1][j] > solve[i][j-1])
            {
                ans += a[i-1];
                i--;
            }
            else {
                ans+= b[j-1];
                j--;
            }
        }
        while(i>0){
         ans += a[i-1];
         i--;
        }
         while(j>0){
         ans += b[j-1];
         j--;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};