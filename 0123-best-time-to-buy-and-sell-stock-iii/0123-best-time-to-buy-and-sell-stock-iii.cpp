
//snippet for shortcut
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
    int maxProfit(vector<int>& prices) {
     int n = prices.size();
     vi left(n,0);
     int mini = prices[0];
     for(int i=1; i<n; i++)
     {
         int val = prices[i]-mini;
         left[i] = max(left[i-1],val);
         mini= min(mini,prices[i]);
     }
     
        vi right(n,0);
      int maxi = prices[n-1];
     for(int i=n-2; i>=0; i--)
     {
         int val = maxi-prices[i];
         right[i] = max(right[i+1],val);
         maxi = max(maxi,prices[i]);
     }
     int ans =max(right[0],left[n-1]);
     for(int i=1 ; i<n-1; i++)
     {
         ans = max(ans,left[i]+ right[i+1]);
     }
     return ans;
    }
};






