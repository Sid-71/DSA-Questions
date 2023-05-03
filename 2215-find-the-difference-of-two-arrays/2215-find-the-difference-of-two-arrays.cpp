class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
  
        vector<int>first,second;
        unordered_set<int>s1(nums1.begin(),nums1.end()),s2(nums2.begin(),nums2.end());
        for(int i : s1)
        {
             if(s2.find(i) == s2.end()){
                 first.push_back(i);
              }   
        }
        
        for(int i : s2)
        {
             if(s1.find(i) == s1.end()){
                 second.push_back(i);
              }   
        }
        
        return {first,second};
        
    }
};