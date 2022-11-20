#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define all(a) a.begin(), a.end()
#define endl "\n"
#define pb push_back
#define F first
#define S second
typedef long long ll;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
     
      deque<int>q;
     for(int i =0; i<k; i++)
     {
        int val = nums[i];
        while(!q.empty() and nums[q.back()] < val)
        {
          q.pop_back();
        }
        q.push_back(i);
     }
        
     vector<int>ans;
        int n =nums.size();
     ans.push_back(nums[q.front()]);
     for(int i=k; i<n; i++)
     {
       int val = nums[i];
    
       if(!q.empty() and  q.front() == i-k)
       {
        q.pop_front();
       }
        while(!q.empty() and nums[q.back()] < val)
        {
          q.pop_back();
        }
        q.push_back(i);
        ans.push_back(nums[q.front()]);
     }

     return ans;   
        
    }
};