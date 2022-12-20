class Solution {
public:
vector<vector<int>>res;
    
    void helper(int i,int n,int k, vector<int>&temp)
    {
       if(k == 0)
       {
           res.push_back(temp);
           return;
       }
        if(i>n)return;
     for(int j=i; j<=n; j++)
     {
         temp.push_back(j);
         helper(j+1,n,k-1,temp);
         temp.pop_back();
     }
        
     }
    
    
    
    vector<vector<int>> combine(int n, int k) {
         vector<int>temp;
        res.clear();
        helper(1,n,k,temp);
        return res;
    }
};