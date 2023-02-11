class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(is_sorted(arr.begin(),arr.end()))
        {
            return 0;
        }
        int i=0;
        int n = arr.size();
        int ans=0;
        for(int i=0; i<arr.size()-1; i++)
        {
            if(arr[i] < arr[i+1])
            {
                int len = 1;
                while(i+1 < n and arr[i] < arr[i+1])
                {
                    i++;
                    len++;
                }
                int f =0;
                while(i+1 < n and arr[i] > arr[i+1])
                {
                    i++;
                    len++;
                    f =1;
                }
                if(f)
                {
               ans = max(ans,len);
                }
               i--;
            }    
        }
        return ans;
    }
};