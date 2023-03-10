class Solution {
public:
    int findMin(vector<int>& nums) {
      int n = nums.size();
        nums.insert(nums.begin(),0);
        nums.push_back(0);
        int low =1;
        int high = n;
        int ans = -1;
        while(low <= high)
        {
            int mid = (low + high)/2;
            if(nums[mid] >=nums[1])
            {
                low = mid+1;
            }
            else {
            ans = nums[mid];
            high = mid-1;
            }
        }
        if(ans == -1)
        {
            return nums[1];
        }
        return ans;
    }
};