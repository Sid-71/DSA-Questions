class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     vector<vector<int>>matrix(n,vector<int>(n,0));
     int dir =0;
    int top =0;
    int bottom = n-1;
    int left = 0;
    int right = n-1;
    int value =1; 
    while(left<=right and top<=bottom)
    {
        if(dir == 0)
        {
            for(int i=left; i<=right; i++)
            {
                matrix[top][i] =value;
                value++;
            }
           top++; 
            dir = 1;
        }
        else if(dir == 1)
        {
            for(int i=top ; i<=bottom; i++)
            {
                matrix[i][right] = value;
                value++;
            }
            right--;
            dir = 2;
        }
        else if(dir == 2)
        {
            for(int i=right; i>= left; i--)
            {
                matrix[bottom][i] = value;
                value++;
            }
            bottom--;
            dir =3;
        }
        else if(dir == 3)
        {
            for(int i= bottom; i>=top ; i--)
            {
                matrix[i][left] = value;
                value++;
            }
            left++;
            dir =0 ;
        }
    }
        
    return matrix;
    }
};