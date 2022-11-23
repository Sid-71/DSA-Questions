// class Solution {
// public:
//     vector<int> canSeePersonsCount(vector<int>& heights) {
        
//     }
// };
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
    vector<int> canSeePersonsCount(vector<int>& a) {
        stack<int>st;
        int n = a.size();
        vector<int>ans(n,0);

        for(int i=n-1; i>=0; i--)
        {
           int val = a[i];
           int cnt =0;
           while(!st.empty() and val > a[st.top()])
           {
            st.pop();
            cnt++;
           }
           if(!st.empty())
           {
           cnt++;
           }
         ans[i] = cnt;
         st.push(i); 
        }
        return ans;
    }
};