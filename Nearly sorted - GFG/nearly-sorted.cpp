//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends





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
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int n, int k){
       vi res(n,0);
       int st =0;
       priority_queue<int,vi,greater<int>>pq;
       for(int i=0; i<=k; i++)
       {
           pq.push(arr[i]);
       }
       for(int i= k+1; i<n; i++)
       {
           res[st] = pq.top();
           st++;
           pq.pop();
           pq.push(arr[i]);
       }
       while(pq.size())
       {
           res[st++] = pq.top();
           pq.pop();
       }
       return res;
       
       
       
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}

// } Driver Code Ends