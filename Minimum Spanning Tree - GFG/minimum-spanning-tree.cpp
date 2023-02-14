//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


//snippet for shortcuts
using namespace std;
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



// dsu snippet

struct dsu {
    vector<int> par;
    vector<int> sze;
 
    void make_set(int n) {
        par.resize(n + 1);
        sze.assign(n + 1, 1);
        iota(all(par), 0);
    }
 
    int find(int x) {
        return (par[x] = (par[x] == x ? x : find(par[x])));
    }
 
    void un(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) {
            return;
        }
        if (sze[x] > sze[y]) {
            swap(x, y);
        }
        sze[y] += sze[x];
        par[x] = y;
    }
};




class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int n, vector<vector<int>> adj[])
    {
        dsu o1;
      o1.make_set(n+1);
      vector<pair<int,pair<int,int>>>gr;
     for(int i=0; i<n; i++)
     {
         for(auto it : adj[i])
         {
           int u = i;
           int v = it[0];
           int w = it[1];
           gr.pb({w,{u,v}});
         }
     }
     
     sort(all(gr));
     int ans =0;
     for(auto it : gr)
     {
         int wt = it.first;
         int u = it.second.first;
         int v = it.S.S;

         if(o1.find(u) != o1.find(v))
         {
             ans += wt;
             o1.un(u,v);
         }
     }
     
      return ans;
      
      
    }
};



//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends