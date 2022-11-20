//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string a){
		    // Code here
		    queue<char>q;
		    map<char,int>m;
		   string ans = "";
		   q.push(a[0]);
		   m[a[0]]++;
		   ans += q.front();
		   int n = a.size();
		   for(int i=1; i<n; i++)
		   {
		       char x = a[i];
		       m[x]++;
		       if(m[x] == 1)
		       {
		           q.push(x);
		       }
		       while(!q.empty() and m[q.front()] >=2)
		       {
		           q.pop();
		       }
		       char ch = ((q.empty())?'#':q.front());
		       ans += ch;

		       }
		   
		   return ans;
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends