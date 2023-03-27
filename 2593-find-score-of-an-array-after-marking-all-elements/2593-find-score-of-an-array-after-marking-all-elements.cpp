class Solution {
public:
    long long findScore(vector<int>& nums) {
           map<int,vector<int>>curr;
           vector<int>vis(nums.size());
        int n = nums.size();
           for(int i=0; i<nums.size(); i++)
           {
               curr[nums[i]].push_back(i);
           }
           long long ans=0;
           for(auto i : curr)
           {
               vector<int>temp = i.second;
               for(int j=0; j<temp.size(); j++)
               {
                   if(!vis[temp[j]])
                   {
                       vis[temp[j]] = 1;
                       if(temp[j]-1>=0)vis[temp[j]-1] = 1;
                       if(temp[j]+1<n)vis[temp[j]+1] = 1;
                       ans += i.first;
                       
                   }
               }
           }
           return ans;
    }
};