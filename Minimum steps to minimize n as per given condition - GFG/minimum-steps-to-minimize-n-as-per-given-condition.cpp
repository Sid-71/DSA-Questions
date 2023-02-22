//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minSteps(int n) 
	{ 
	  int dp[n+1];
	  dp[1] =0;
	  dp[2] =1;
	  dp[3] = 1;
	  for(int num=4; num<=n; num++)
	  {
	     dp[num] = 1 + dp[num-1];
	     if(num%2 == 0)
	     {
	         dp[num] = min(dp[num],1 + dp[num/2]);
	     }
	      if(num%3 == 0)
	     {
	         dp[num] = min(dp[num],1 + dp[num/3]);
	     }
	  }
	  return dp[n];
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