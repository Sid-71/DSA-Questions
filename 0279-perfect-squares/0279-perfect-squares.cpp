
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
    int numSquares(int k) {
        vector<int>a;
        for(int i=1; i*i<=k; i++)
        {
            a.push_back(i*i);
        }
        int n = a.size();
        
         vvi dp(n+1,vi(k+1,INT_MAX-1));
        for(int i=0; i<=n; i++)
        {
            dp[i][0] = 0;
        }
        
        for(int i=1; i<= n; i++)
        {
            for(int sum=1; sum <= k; sum++)
            {
                int nhi = dp[i-1][sum];
                int yes = INT_MAX-1;
                if(sum >= a[i-1])
                {
                    yes = 1 + dp[i][sum-a[i-1]];
                }
                dp[i][sum] = min(yes,nhi);
            }
        }
        if(dp[n][k] == INT_MAX-1)return -1;
        return dp[n][k];

      return 0;
    }
};