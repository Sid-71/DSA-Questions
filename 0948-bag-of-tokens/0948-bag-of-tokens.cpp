
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
    int bagOfTokensScore(vector<int>& tokens, int power) {
      if(power == 0)return 0;
      int n = tokens.size();
      sort(all(tokens));
      if(tokens.size() >0  and power < tokens[0])return 0;
      vi pref(n,0);
      for(int i=0; i<tokens.size(); i++)
      {
          pref[i] = tokens[i];
          if(i!=0)
          {
             pref[i] += pref[i-1];
          }
      }
      
    int maxScore = upper_bound(all(pref),power)-pref.begin();
    int katna =0;
    for(int i=n-1; i>=1; i--)
    {
        power+=tokens[i];
        katna++;
        int ind = upper_bound(all(pref),power)-pref.begin()-1;
        if(ind >= i)
        {
            ind = ind-1;
        }
        maxScore = max(maxScore,ind+1-katna);   
    }
    return maxScore;
        
    }
};