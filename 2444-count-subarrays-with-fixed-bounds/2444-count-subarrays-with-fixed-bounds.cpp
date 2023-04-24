class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int minindex = -1;
        int maxindex = -1;
        int culprit = -1;
        long long  ans=0;
        for(int i=0; i < nums.size(); i++)
        {
            if(nums[i] < minK or nums[i] > maxK )
            {
                culprit = i;
            }
            if(nums[i] == minK)
            {
                minindex = i;
            }
            if(nums[i] == maxK)
            {
                maxindex = i;
            }
            int temp = min(minindex,maxindex);
            if(temp-culprit >= 0)
            {
                ans += temp-culprit;
            }
        }
        return ans;
    }
};