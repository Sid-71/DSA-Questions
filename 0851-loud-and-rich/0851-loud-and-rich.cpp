
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
int memo[501];    
    int dfs(int u, vi &q, vvi &a)
    {   
        if(memo[u] != -1)return memo[u]; 
        int ans=u;
        for(auto v :a[u])
        {
            int val = dfs(v,q,a);
           if(q[ans]  > q[val])
           {
               ans = val;
           }
        }
        memo[u] = ans;
        return ans;
    }

    
    
    
    vector<int> loudAndRich(vector<vector<int>>& a, vector<int>& quiet) {
        int n = quiet.size();
        vvi gr(n);
        vi ind(n);
        for(int i=0; i<a.size(); i++)
        {
        int v = a[i][0];
        int u = a[i][1];
            gr[u].pb(v);
            ind[v]++;
        }
        memset(memo,-1,sizeof(memo));
        for(int i=0; i<n; i++)
        {
            if(ind[i] == 0)
            {
             if(memo[i] != -1)continue;
            int val =dfs(i,quiet,gr);
            }
        }
        for(int i=0; i<n; i++)
        {
           if(memo[i] != -1)continue;
            int val =dfs(i,quiet,gr);
        }
        
        vector<int>res(n);
        for(int i=0; i<n; i++)
        {
       res[i] = memo[i];
        }
        return res;
        
    }
};