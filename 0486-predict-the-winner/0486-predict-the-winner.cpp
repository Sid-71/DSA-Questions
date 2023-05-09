class Solution {
public:
    
    
    int solve(vector<int>&nums,int start,int end,int scoreA,int scoreB,int turn)
    {
        if(start > end)
        {
            if(scoreA >= scoreB){
                return true;
            }
            return false;
        }
      
        if(turn == 0)
        {
                               // player1 turn 
            int pehleSeNikalo = solve(nums,start+1,end,scoreA+nums[start],scoreB,turn^1);
            int endSeNikalo = solve(nums,start,end-1,scoreA+nums[end],scoreB,turn^1);
            return (pehleSeNikalo or endSeNikalo);
        }
        else {
                             // second player turn
            int pehleSeNikalo = solve(nums,start+1,end,scoreA,scoreB+nums[start],turn^1);
            int endSeNikalo = solve(nums,start,end-1,scoreA,scoreB+nums[end],turn^1);
            return (pehleSeNikalo and endSeNikalo);   
        }
    }
    
    
    
    bool PredictTheWinner(vector<int>& nums) {
    int scoreA =0;
    int scoreB =0;
    int turn =0;
    int start =0;
    int end = nums.size()-1;
    return solve(nums,start,end,scoreA,scoreB,turn);
    }
};