
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
    int validSubarraySize(vector<int>& arr, int k) {
     int n = arr.size();
        vi left(n,-1);
     vi right(n,n);
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
              right[i] = st.top();
          }
          
          st.push(i);
       }
        while(!st.empty())
        {
            st.pop();
        }
         for(int i=0; i<n; i++)
       {
           int cur = arr[i];
           while(!st.empty() and cur <= arr[st.top()] )
           {
               st.pop();
           }
          
          if(!st.empty())
          {
              left[i] = st.top();
          }
          
          st.push(i);
       }
        
        for(int i=0; i<n; i++)
        {
            int L = left[i];
            int R = right[i];
            int len = R-L-1;
            int targ =  k/len;
            if(arr[i] > targ)
            {
                return len;
            }
            
        }
        return -1;
    }
};