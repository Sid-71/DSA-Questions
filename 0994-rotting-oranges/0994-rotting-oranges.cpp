int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
class Solution {
public:

bool valid(int x,int y, int n, int m)
{
   if(x>=0 and y>=0 and x<n and y<m)
   {
      return true;
   }
   return false;
}


    int orangesRotting(vector<vector<int>>& a) {      
        int total=0;
        queue<pair<int,int>> q;
         int n= a.size();
         int m = a[0].size();
       vector<vector<int>> b(n,vector<int>(m,0));
        if(a == b)return 0;
        if(n == 1 and m == 1)
        {
           int x = a[0][0];
            if (x == 2 or x == 0)
            {
             return 0;
            }
            if(x == 1)
            {
                return -1;
              }
            
        }
        for(int i=0; i<n; i++)
        {
         for(int j=0; j<m; j++){ 
            if(a[i][j] == 2)
            {
               q.push({i,j});
            }
            if(a[i][j] == 1)
            {
               total++;
            }     
         }
          }
        
      
       int rotten=0;
       int res=0;
      while(!q.empty()){
      
       int k= q.size();
          while(k--)
       {

        int x = q.front().first;
        int y=q.front().second;
         q.pop();
         for(int l=0; l<4; l++)
         {
            int xx = x+dx[l];
            int yy = y+dy[l];
            if(valid(xx,yy,n,m) and a[xx][yy] == 1)
            {
                rotten++;
               a[xx][yy] = 0;
               q.push({xx,yy});                        
            }
         }               
       }
        res++;
      }
    if(total == rotten)
    {
       return res-1;
    }   
    return -1;
    }
};