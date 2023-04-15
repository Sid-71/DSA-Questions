class Solution {
public:
int dp[1005][2005];
int helper(vector<vector<int>> &piles, int ind, int k)
{
  if (ind >= piles.size() or !k)
  {
    return 0;
  }
  if (dp[ind][k] != -1)
  {
    return dp[ind][k];
  }
  int x = helper(piles, ind + 1, k);
  int sum = 0;
  int y = 0;
    int len = piles[ind].size();
  for (int j = 0; j < min(len, k); j++)
  {
    sum += piles[ind][j];
    y = max(y, sum + helper(piles, ind + 1, (k - (j + 1))));
  }
  dp[ind][k] = max(x, y);
  return dp[ind][k];
}

int maxValueOfCoins(vector<vector<int>> &piles, int k)
{
  memset(dp, -1, sizeof(dp));
  return helper(piles, 0, k);
}
};