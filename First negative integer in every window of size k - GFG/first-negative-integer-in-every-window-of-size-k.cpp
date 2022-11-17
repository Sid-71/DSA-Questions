//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

typedef  long long int ll ;
vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
 
 
 
 queue<ll>q;
for(int i=0;i<k; i++)
{
    if(a[i] < 0)
    {
        q.push(i);
    }
}
vector<ll>ans;

if(!q.empty())
{
ans.push_back(a[q.front()]);
}
else {
ans.push_back(0);
}


for(int i=k; i<n; i++)
{
    int val = i-k;
    if(!q.empty() and q.front() == val)
    {
        q.pop();
    }
    if(a[i] < 0)
    {
        q.push(i);
    }
    if(!q.empty())
    {
        ans.push_back(a[q.front()]);
    }
    else {
        ans.push_back(0);
    }
   
}
return ans;


 }