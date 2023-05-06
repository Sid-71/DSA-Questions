class Solution {
public:
    int findLongestChain(vector<vector<int>>& a) {
       
        sort(a.begin(),a.end(),[&](vector<int>&a,vector<int>&b){
            
            return a[1] < b[1];
        }); 
        
       int ending_time = a[0][1];
        int ans=1;
        for(int i=1; i<a.size(); i++)
        {
            if(a[i][0] > ending_time)
            {
                ans++;
                ending_time = a[i][1];
            }
        }
        return ans;
    }
};