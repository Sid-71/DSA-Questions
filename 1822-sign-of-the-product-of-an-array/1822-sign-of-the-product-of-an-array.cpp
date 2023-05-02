class Solution {
public:
    int arraySign(vector<int>& nums) {
        auto it = find(nums.begin() ,nums.end(),0);
        if(it!= nums.end())
        {
            return 0;
        }
        int cnt =0;
        for(int i=0;i<nums.size(); i++)
        {
           if(nums[i] < 0){
               cnt++;
           }
        }
       if(cnt%2)return -1;
           return 1;
        
    }
};