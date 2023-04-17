class Solution {
public:
    
   
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end()),res=r;

        while(l<=r){
            int mid = (l+r)/2;
            long long time = 0;
            for(auto x:piles){
               long long  val  = x/mid;
                if(x%mid != 0)
                {
                    val++;
                }
                time += val;
            }
            if(time<=h){
                res=mid;
                r=mid-1;
            }else{
                l=mid+1;
            } 
        }
        return res;
        
    }
};