class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& tiles, int k) {
     sort(tiles.begin(),tiles.end());
     vector<int>pref(tiles.size());
        int n = tiles.size();
     for(int i=1; i<n; i++)
     {
         pref[i] = (tiles[i][0]-tiles[i-1][1]-1);
         pref[i] += pref[i-1];
     }
      int ans =0;
     for(int i=0; i<n ; i++)
     {
         int l = tiles[i][0];
         int r = tiles[i][1];
         int ind = upper_bound(tiles.begin(),tiles.end(),vector<int>({l+k-1,INT_MAX}))-tiles.begin()-1;
         int endTile = min(l+k-1,tiles[ind][1]);
         int curAns = ((endTile-l+1) - (pref[ind]-pref[i]));
         ans = max(ans,curAns);
     }
        return ans;
        
        
    }
};