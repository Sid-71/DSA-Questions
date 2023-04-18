class Solution {
public:
    
    
    int cnt(int n)
    {
        int cntt=0;
        for(int i=29; i>=0; i--)
        {
            if((1<<i)&n)cntt++;
        }
        return cntt;
    }
    
    long long countExcellentPairs(vector<int>& nums, int k) {
        set<int>st;
        for(auto i : nums)
        {
            st.insert(i);
        }
        vector<int>bits;
        for(auto i : st)
        {
            int total_bits = cnt(i);
            bits.push_back(total_bits);
        }
        sort(bits.begin(),bits.end());
        int start =0;
        int end = bits.size()-1;
        long long  ans =0;
        while(start < bits.size() and end >=0)
        {
            int val = bits[start] + bits[end];
            if(val >=k)
            {
                ans += bits.size()-start;
                end--;
            }
            else {
                start++;
            }
        }
        
       
        return ans;
    }
};