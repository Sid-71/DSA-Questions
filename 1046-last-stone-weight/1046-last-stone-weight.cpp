class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
      priority_queue<int>pq(stones.begin(),stones.end());
        
        while(pq.size() >= 2)
        {
            int heaviestStone  = pq.top();
            pq.pop();
            int NextHeaviestStone = pq.top();
            pq.pop();
            heaviestStone -=  NextHeaviestStone;
             pq.push(heaviestStone);
        }
        return pq.top();
    }
};