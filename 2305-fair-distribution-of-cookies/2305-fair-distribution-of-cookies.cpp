class Solution {
public:

int res;

        void dfs(vector<int>&co,int ind , vector<int>&ans)
        {
            int k = ans.size();
            
             if(ind == co.size())
             {
                 int anss = *max_element(ans.begin(),ans.end());
                 res = min(res,anss);
                 return ;
             }
            
            
            for(int i=0; i<k; i++)
            {
                ans[i] += co[ind];
                dfs(co,ind+1,ans);
                ans[i]-= co[ind];
            }
        }
    int distributeCookies(vector<int>& co, int k) {
         res = INT_MAX;
         vector<int>ans(k,0);
         dfs(co,0,ans);
         return res;
    }
};