
//snippet for shortcuts
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
#define pii pair<int, int>
#define vpii vector<pii>
#define endl "\n"
#define pb push_back
#define F first
#define S second
#define exit exit(0)
typedef long long ll;
#define double long double
#define debug1(x) cerr << #x << ": " << x << endl
#define debug2(x, y) cerr << #x << ": " << x << " | " << #y << ": " << y << endl
#define all(a) a.begin(), a.end()

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vvi dp(n,vi(2));
        dp[0][0] = -(prices[0] + fee);
        for(int i=1; i<n; i++)
        {
            dp[i][0] = max(dp[i-1][0],dp[i-1][1]-prices[i]-fee);
            dp[i][1] = max(dp[i-1][1],dp[i-1][0] + prices[i]);
        }
        return dp[n-1][1];
        
    }
};
/*
what dp[i][0] = max profit upto i if you buy or not 
dp[i][1] = max profit if you sell or don't sell 

i was getting confused at a point that i have to know the last location 
where i have sell when i have to buy , but that is eleiminated not by 
taking the last index of sell , but by taking overall cost or overall profit
in previous states.

*/