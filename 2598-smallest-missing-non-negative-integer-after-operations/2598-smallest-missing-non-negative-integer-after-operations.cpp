class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int v) {
    
       unordered_map<int,int>mp;
        for(auto i  : nums)
        {
          int val = ((i%v)+v)%v;
        mp[val]++;
            
        }
        int n = nums.size();
       for(int i=0; i<=n; i++)
       {
           if(mp[i%v] >0 )
           {
               mp[i%v]--;
           }
           else return i;
       }
        return n;
        
        
        
        
    }
};