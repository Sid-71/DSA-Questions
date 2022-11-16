
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
    string removeKdigits(string num, int k) {
      stack<char>st;
      st.push(num[0]);
        if(k == num.size())
        {
            return "0";
        }
      for(int i=1; i<num.size(); i++)
      {
          char ch = num[i];
          int di = num[i]-'0';
          while(k and !st.empty() and di < int(st.top()-'0'))
          {
            st.pop();
            k--;
          }
          st.push(ch);
      }
      if(k)
      {
        while(!st.empty() and k)
        {
          st.pop();
          k--;
        }
      }
    
     string res = "";
    while(!st.empty())
    {
       res.push_back(st.top());
          st.pop();
     }
    
    while(res.back() == '0')
    {
      res.pop_back();
    }
     reverse(res.begin(),res.end());
        if(res == "")
        {
        return "0";
        }
    return res;        
        
    }
};