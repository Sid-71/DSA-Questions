class Solution {
public:
    int countSubarrays(vector<int>& nums, int k) {
    unordered_map<int,int>m;
        m[0] = 1;
    int sum =0;
        int ans= 0;
        bool found = false;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] < k)
        {
            sum--;
        }
        else if(nums[i] > k)
        {
         sum++; 
        }
        else{
            found  =true;
        }
        if(found){
            ans += m[sum];
            ans+= m[sum-1];
        }
        else {
            m[sum]++;
        }
        
    }
        return ans;
        

       
    }
};