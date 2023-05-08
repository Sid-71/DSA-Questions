class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum =0;
        int i=0;
        int j=0;
        int  n = mat.size();
        while(i<n and j>=0)
        {
            
            sum += mat[i][j];
            sum += mat[n-i-1][j];
            i++;
            j++;
        }
        if(n%2)
        {
        sum -= mat[n/2][n/2];            
        }
        return sum;
        
    }
};