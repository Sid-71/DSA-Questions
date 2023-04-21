//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
       vector<int>right(n,-1);
       stack<int>st;
       for(int i=n-1; i>=0; i--)
       {
           int cur = arr[i];
           while(!st.empty() and cur <= arr[st.top()] )
           {
               st.pop();
           }
          
          if(!st.empty())
          {
              right[i] = arr[st.top()];
          }
          
          st.push(i);
       }
       return right;
    } 
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends