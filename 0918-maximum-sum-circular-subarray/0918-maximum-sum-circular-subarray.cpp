

class Solution {
public:
    int n;
int kadane(vector<int>&a)
{
    int cur =0;
    int ans = *max_element(a.begin(),a.end());
    for(int i=0; i<n; i++)
    {
     cur+= a[i];
     ans = max(ans,cur);
     if(cur<0)cur =0;
    }
    return ans;
}

    
    int maxSubarraySumCircular(vector<int>& a) {
        n = a.size();
       int totalSum = accumulate(a.begin(),a.end(),0);
        int ans1 = kadane(a);
       for(int i=0; i<a.size(); i++)
       {
          a[i] = -1*a[i];
       }
        
       int ans2 =  -1*kadane(a);
        ans2 = totalSum-ans2;
        if(ans1 > 0)
        {
            return max(ans1,ans2);
        }
        return ans1;
        
    }
};