//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int n, vector<vector<int>> adj[], int s)
    {
       vector<int>dist(n+1,1e10);
       set<pair<int,int>>st;
       st.insert({0,s});
       dist[s] = 0;
       while(st.size() > 0)
       {
           auto x = *(st.begin());
           auto node = x.second;
           st.erase(st.begin());
           auto dis = x.first;
           for(auto it : adj[node])
           {
               if(dis + it[1] < dist[it[0]])
               {
                   st.erase({dist[it[0]] , it[0]});
                   int d = dis + it[1];
                   dist[it[0]] = d;
                   st.insert({d,it[0]});
               }
           }
           
       }
       return dist;
       
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
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends