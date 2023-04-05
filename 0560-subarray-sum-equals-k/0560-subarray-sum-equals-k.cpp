class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
   
       int cur_sum =0;
       int ans=0;
       unordered_map<int,int>enctSum;
        for(int i=0; i<nums.size(); i++)
        {
            cur_sum += nums[i];
            if(cur_sum == k)
            {
                
                ans+=1;
            }
            int newVal = cur_sum-k;
            if(enctSum.count(newVal))
            {
                ans += enctSum[newVal];
            }
           enctSum[cur_sum]++;   
        }
       return ans;
        
        
    }
};