class Solution {
public:
    int dp[1001];
    int solve(vector<int>&nums, int &k, vector<vector<int>>&len, int idx) {
        if (idx >= nums.size()) {
            return 0;
        }
        if (dp[idx] != -1) {
            return dp[idx];
        }

        int ans = INT_MAX;
        for (int i = idx; i < nums.size(); i++) {
            int curr = len[idx][i] + k;
            int next = solve(nums, k, len, i+1);
            ans = min(ans, curr+next);
        }
        return dp[idx] = ans;
    }

    int minCost(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>>len(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            vector<int>m(1001, 0);
            int cnt = 0;

            for (int j = i; j < n; j++) {
                m[nums[j]]++;   //increment freq
                if (m[nums[j]] == 2) {
                    cnt += 2;
                }
                else if (m[nums[j]] > 2) {
                    cnt += 1;
                }
                len[i][j] = cnt;
            }
        }
        memset(dp, -1, sizeof(dp));
        return solve(nums, k, len, 0);
    }
};