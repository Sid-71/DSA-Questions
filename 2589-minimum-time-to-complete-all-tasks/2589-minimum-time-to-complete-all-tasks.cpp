class Solution {
public:
    int findMinimumTime(vector<vector<int>>& a) {
   
        sort(a.begin(),a.end(),[](vector<int>&a,vector<int>&b)
        {
            if(a[1]!=b[1])return a[1]<b[1];
            return a[0]<b[0];
        });
        
        int countt =0;
        unordered_map<int,bool>used;
        for(auto it : a)
        {
            // reducing the duration .....
            for(int i= it[0]; i<=it[1]; i++){
               if(used.count(i))
               {
                  it[2]--;  
               }
            }
            for(int i = it[1]; it[2]>0; i--)
            {
                if(!used.count(i))
                {
                    it[2]--;
                    countt++;
                    used[i]  =1;
                }
            }
            
        }
        return countt;
        
    }
};