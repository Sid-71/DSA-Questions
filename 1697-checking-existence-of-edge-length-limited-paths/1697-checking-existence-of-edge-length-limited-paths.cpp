class Solution {
public:
   vector<int> parent;
vector<int> rank;

int find (int x) {
    if (x == parent[x]) 
        return x;

    return parent[x] = find(parent[x]);
}

void Union (int x, int y) {
    int x_parent = find(x);
    int y_parent = find(y);

    if (x_parent == y_parent) 
        return;

    if(rank[x_parent] > rank[y_parent]) {
        parent[y_parent] = x_parent;
    } else if(rank[x_parent] < rank[y_parent]) {
        parent[x_parent] = y_parent;
    } else {
        parent[x_parent] = y_parent;
        rank[y_parent]++;
    }
} 
    
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edgeList, vector<vector<int>>& queries) {
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=1; i<=n; i++)
        {
            parent[i] = i;
        }
        
        for(int i=0; i<queries.size(); i++)
        {
            queries[i].push_back(i);
        }
        sort(queries.begin(),queries.end(),[&](vector<int>&a,vector<int>& b){
           return a[2]<b[2];
        });
         sort(edgeList.begin(),edgeList.end(),[&](vector<int>&a,vector<int>& b){
           return a[2]<b[2];
        });
        
        
        int j=0;
        
        vector<bool>ans(queries.size());
        for(int i=0; i<queries.size(); i++)
        {
            int u = queries[i][0];
            int v = queries[i][1];
            int di = queries[i][2];
            int index = queries[i][3];
            while(j<edgeList.size() and di > edgeList[j][2])
            {
                Union(edgeList[j][0],edgeList[j][1]);
                j++;
            }
            
            int x_parent = find(u);
            int y_parent=  find(v);
            bool cur = false;
            if(x_parent == y_parent){
             cur = true;   
            }
            ans[index] = cur;
        }
        
        return ans;
    }
};