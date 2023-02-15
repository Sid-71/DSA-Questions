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



class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& a) {
	   // second is dependont on first 
	   vvi gr(N);
	   vi ind(N+1);
	   
	   for(auto i : a)
	   {
	       int u = i.second;
	       int v = i.first;
	       gr[v].pb(u);
	       ind[u]++;
	   }
	   queue<int>q;
	   for(int i=0; i<N; i++)
	   {
	       if(ind[i] == 0)q.push(i);
	   }
	   int cnt =0;
	   while(q.size() > 0 )
	   {
	       auto u = q.front();
	       q.pop();
	       cnt++;
	       for(auto it : gr[u])
	       {
	           ind[it]--;
	           if(ind[it] == 0)
	           {
	               q.push(it);
	           }
	       }
	   }
	   if(cnt == N)
	   {
	   return 1;
	   }
	   return 0;
	  
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends