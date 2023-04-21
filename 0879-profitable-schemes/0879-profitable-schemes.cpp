class Solution {
public:
    int memo[103][103][103];
    const int mod = 1e9+7;
    int nn;
    
    int solve(int ind,int sum, int peop,int mp, vector<int>&g,vector<int>&p)
    {
        if(peop > nn)return 0;
        
        if(ind == g.size())
        {
            return (sum >=mp);
        }
        if(memo[ind][sum][peop] != -1)
        {
            return memo[ind][sum][peop];
        }
        
        long long  inc = solve(ind+1,min(sum+p[ind],mp),peop + g[ind],mp,g,p);
        long long  noti = solve(ind+1,sum,peop,mp,g,p);
        long long  val = inc%mod+noti%mod;
        val%=mod;
        memo[ind][sum][peop] = val;
        return val;
    }
    
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        memset(memo,-1,sizeof(memo));
        nn = n;
        return solve(0,0,0,minProfit,group,profit)%mod;
        
    }
};