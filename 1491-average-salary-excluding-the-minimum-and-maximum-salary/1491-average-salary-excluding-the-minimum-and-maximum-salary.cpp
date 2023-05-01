class Solution {
public:
    double average(vector<int>& a) {
        int maxi = *max_element(a.begin(),a.end());
        int mini = *min_element(a.begin(),a.end());
        int n = a.size();
       int sum = accumulate(a.begin(),a.end(),0);
      sum -= (maxi+mini);
        return (double)sum/(n-2);
    }
};