class Solution {
public:
    // int dp[2001];
    

    
//     int solve(string s,int ind)
//     {
//      if(ind>=s.size())return 0;
//      if(dp[ind] != -1){
//          return dp[ind];
//      }
//      int ans =1e9-1;
//      for(int i = ind; i<s.size(); i++)
//      {
//          if(Palindrome(s,ind,i))
//          {
//             ans = min(ans,1 + solve(s,i+1));
//          }
//      }
        
        
//       return dp[ind] = ans;  
        
    // }
   bool isPalindrome(int i, int j, string &s) {
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}
    
    
    int minCut(string s) {
       int n = s.size();
    vector<int> dp(n + 1, 0);
    dp[n] = 0;
    for (int i = n - 1; i >= 0; i--) {
        int minCost = INT_MAX;
        //string[i...j]
        for (int j = i; j < n; j++) {
            if (isPalindrome(i, j, s)) {
                int cost = 1 + dp[j + 1];
                minCost = min(minCost, cost);
            }
        }
        dp[i] = minCost;
    }
    return dp[0] - 1;
    }
};