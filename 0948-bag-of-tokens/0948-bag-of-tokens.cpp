
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
     sort(all(tokens));
     int start =0;
     int end = tokens.size()-1;
     int score =0;
     int ans =0;
     while(start <= end)
     {
         if(power >= tokens[start])
         {
             score++;
             ans = max(ans,score);
             power-=tokens[start];
             start++;
         }
         else if(score>=1) {
             score--;
             power+=tokens[end];
             end--;
         }
         else {
             // yeh woh step hai jaha per aap kuch nhi kar parhe toh while loop me 
             // atke thodi rehna hai 
             break;
         }
     }
      
    return ans;
        
    }
};