#define all(a) a.begin(),a.end()
class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& a) {
        vector<int>IncNum;
        IncNum.push_back(a[0]);
        vector<int>answer = {1};
        for(int i=1; i<a.size(); i++)
        {
            if(a[i] >= IncNum.back())
            {
                IncNum.push_back(a[i]);
                answer.push_back(IncNum.size());
                continue;
            }
        
           int kidharRakhna = upper_bound(all(IncNum),a[i])-IncNum.begin();
           IncNum[kidharRakhna] = a[i];
           answer.push_back(kidharRakhna+1); 
        }
        return answer;
    }
};