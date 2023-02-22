//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minSteps(int n) 
	{ 
	    queue<int>q;
	    q.push(n);
	    int ans = 0;
	    while(q.size())
	    {
	        int v = q.size();
	        while(v--)
	        {
	            auto u = q.front();
	            q.pop();
	            if(u == 1)return ans;
	            if(u%3 == 0)q.push(u/3);
	            if(u%2 == 0)q.push(u/2);
	            if(u>=2)q.push(u-1);
	        }
	        ans++;
	    }
	    return ans;
	} 
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

       

	    Solution ob;
	    cout << ob.minSteps(n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends