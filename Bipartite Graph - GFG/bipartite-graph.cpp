//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
vector<int>col;
    bool check(int start,int n,vector<int>adj[])
    {
        queue<int>q;
        col[start] = 0;
        q.push(start);
        while(q.size())
        {
            auto node = q.front();
            q.pop();
            for(auto it : adj[node])
            {
                if(col[it] == col[node])return false;
                else if(col[it] == -1)
                {
                    col[it] = !col[node];
                    q.push(it);
                }
            }
        }
        return true;
    }
	bool isBipartite(int n, vector<int>adj[]){
	    col.resize(n+1,-1);
	    for(int i=0; i<n; i++)
	    {
	        if(col[i] == -1)
	        {
	            bool ans = check(i,n,adj);
	            if(ans == false)return false;
	        }
	    }
	    return true;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends