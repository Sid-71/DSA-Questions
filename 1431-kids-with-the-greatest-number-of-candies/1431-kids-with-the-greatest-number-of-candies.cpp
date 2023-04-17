class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int k) {
     int maxi =*max_element(candies.begin(),candies.end());
    vector<bool>res(candies.size(),false);
    for(int i=0; i<candies.size(); i++)
    {
        int val = candies[i];
        if(val + k >= maxi){
            res[i] = true;
        }
    }
        return res;
    }
};