class Solution {
public:
    
    bool check(int capacity,vector<int>&piles,int hour)
    {
        long long can_eat = 0;
        for(int i=0; i<piles.size(); i++)
        {
            long long time  = (long long)piles[i]/capacity;
            if(piles[i]%capacity!= 0)
            {
                time+=1;
            }
            can_eat+=time;
        }
        // if(can_eat <= hour){
        //     return true;
        // }
        // return false;
        return (can_eat<=hour);
        
    }
    
    
    
    int minEatingSpeed(vector<int>& piles, int h) {
       long long low = 1;
       long long high = 1e15;
        int possible_answer = -1;
       while(low <= high)
       {
           int mid = (low + high) /2;
           if(check(mid,piles,h) == true)
           {
               possible_answer = mid;
               high = mid-1;
           }
           else {
               low = mid+1;
           }
       }
        return possible_answer;
    }
};

