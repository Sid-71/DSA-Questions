class Solution {
public:
    bool possible(vector<int>& ct, vector<int>& rc, long long budget, long long int k){
        deque<long long int> dq;
        vector<long long int> ans;
        vector<long long int> sum;
        long long int s = 0;
        for(int i=0;i<k;++i){
            s+=rc[i];
        }
        long long int j = 0;
        sum.push_back(s);
        for(int i=k;i<ct.size();++i){
            s-=rc[j];
            j++;
            s+=rc[i];
            sum.push_back(s);
        } // sum of each subarray of size k
 
        for (int i=0; i<ct.size(); i++) {
            if (!dq.empty() && dq.front() == i-k)
                dq.pop_front();
            while (!dq.empty() && ct[dq.back()] < ct[i])
                dq.pop_back();
            dq.push_back(i);
            if (i>=k-1) 
                ans.push_back(ct[dq.front()]);
        }// sliding window maximum
 
        long long int total=0;
        for(int i=0;i<ans.size();++i){
            total = ans[i] + k*sum[i];
            if(total <= budget)
                return true;
        }
 
        return false;
 
    }
    int maximumRobots(vector<int>& ct, vector<int>& rc, long long budget) {
        long long int l = 1, h = ct.size();
        long long int ans = 0;
        while(l <= h){ // binary search the answer
            long long int mid = l + (h - l)/2;
            if(possible(ct, rc, budget, mid)){
                ans = mid;
                l = mid + 1;
            }
 
            else
                h = mid - 1;
        }
        return ans;
    }
};