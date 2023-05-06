class Solution {
public:
    int jump(vector<int>& arr) {
        
       int lamba_jump =arr[0] ;
    int kahatak = arr[0];
        int n = arr.size();
         if(n == 1)return 0;
       if(lamba_jump >= n-1)return 1; 
   
    int jumps =1;

    for(int i=1; i<n; i++)
    {
        lamba_jump = max(lamba_jump,i+arr[i]);
        if(i == kahatak)
        {
            jumps++;
            kahatak = lamba_jump;
            if(kahatak >= n-1)
            {
                return jumps;
            }
        }
    }
    return jumps;
        
        
        
    }
};