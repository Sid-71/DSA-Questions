
   const int N = 1e4+5;
    const  int mod = 1e9+7;
    int length[N][22];
    int dp[N][21];
class Solution {
public:
 
    
    void uniqueNums()
    {
        memset(length,0,sizeof(length));
        for(int j=1; j<N; j++)
        {
            length[j][1] = 1;
            for(int k=j+j; k<N; k+=j)
            {
                for(int i=0; i<20; i++)
                {
                    length[k][i+1] += length[j][i];
                }
            }
        }
    }
    
    long long totalPaths(int n,int x)
    {
        if(n == 0)
        {
            return (x==0);
        }
        if(x == 0)
        {
            return 0;
        }
         if(dp[n][x] != -1)
        {
            return dp[n][x];
        }
        long long  f1 = totalPaths(n-1,x-1)%mod;
        long long  f2 = totalPaths(n-1,x)%mod;
   
        long long ans = f1%mod + f2%mod;
        ans%= mod;
        dp[n][x] = ans;
        return ans;
    }
    
    
    int idealArrays(int n, int maxValue) {
        uniqueNums();
        memset(dp,-1,sizeof(dp));
        long long ans =0;
        
        for(int i= maxValue; i>=1; i--)
        {
            for(int j = 1; j<21; j++)
            {
                long long arrg = totalPaths(n,j);
                ans = ans + (arrg * length[i][j] % mod)%mod;
                ans%= mod;
            }
        }
        
        return ans;
    }
};