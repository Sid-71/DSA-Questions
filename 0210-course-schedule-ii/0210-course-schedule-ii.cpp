
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
    vector<int> findOrder(int n, vector<vector<int>>& a) {
     vvi gr(n);
   vi ind(n);
    for(auto x: a)
     {
         int u = x[0];
         int v = x[1];
         gr[v].pb(u);
     ind[u]++;
     }
    queue<int>q;
        for(int i=0; i<n; i++)
        {
            if(!ind[i])q.push(i);
        }
        vector<int>ans;
        while(q.size())
        {
            auto u = q.front();
            q.pop();
            ans.pb(u);
            for(auto it : gr[u])
            {
                ind[it]--;
                if(!ind[it])
                {
                    q.push(it);
                }
            }
        }
        if(ans.size() == n)
        {
            return ans;
        }
        return {};
        
        
    }
};