//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    
    // add code here.
    if(k == 1)
    {
        return q;
    }
    vector<int>arr;
    int n = q.size();
    for(int i=0; i<k; i++)
    {
        arr.push_back(q.front());
        q.pop();
    }
    reverse(arr.begin(),arr.end());
    for(int i=0; i<k; i++)
    {
        q.push(arr[i]);
    }
    for(int i=0; i<n-k; i++)
    {
        q.push(q.front());
        q.pop();
    }
    return q;
    
}