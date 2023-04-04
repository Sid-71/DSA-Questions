
//snippet for shortcuts

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
#define pii pair<int, int>
#define vpii vector<pii>
#define endl "\n"
#define pb push_back
#define F first
#define S second
#define exit exit(0)
typedef long long ll;
#define double long double
#define debug1(x) cerr << #x << ": " << x << endl
#define debug2(x, y) cerr << #x << ": " << x << " | " << #y << ": " << y << endl
#define all(a) a.begin(), a.end()

class Solution {
public:
    vector<long long> maximumSegmentSum(vector<int>& nums, vector<int>& b) {
        vector<long long >ans;
       set<pii>st;
       int n = nums.size();
       vector<long long> pref(n);
      pref[0] = nums[0];
      for(int i=1; i<n;i++)pref[i] = nums[i]+pref[i-1];
       multiset<long long >ms = {0,pref[n-1]};
       st.insert({0,n-1});
       
       for(auto index  : b)
       {
           auto itr = st.upper_bound({index,n-1});
           itr--;
           int range_start = itr->first;
           int range_end = itr->second;
           auto currsum = pref[range_end]-pref[range_start]+nums[range_start];
           st.erase(itr);
           ms.erase(ms.find(currsum));
           if(index-1>=range_start)
           {
               st.insert({range_start,index-1});
               auto value = pref[index-1]-pref[range_start]+nums[range_start];
               ms.insert(value);
           }
            if(index+1 <=range_end)
           {
               st.insert({index+1,range_end});
               auto value = pref[range_end]-pref[index+1]+nums[index+1];
               ms.insert(value);
           }
           ans.push_back(*(ms.rbegin()));
       }
       return ans;
    }
};