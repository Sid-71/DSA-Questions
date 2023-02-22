class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int ans=0;
        int low =1;
        int high = 1e9;
        // sort(nums.begin(),nums.end());
        while(low<=high)
        {
            int mid = (high + low)/2;
            int cnt= 0;
            for(int i=0; i<nums.size(); i+=1)
            {
                if(nums[i]  <= mid){
                    cnt++;
                    i++;
                }
            }
            
            if(cnt >= k)
            {
                ans  = mid;
                high = mid-1;
            }
            
            else {
            low = mid + 1;
            }
        }
        return ans;
        
    }
};