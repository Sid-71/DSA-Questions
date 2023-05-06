#include<bits/stdc++.h>
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
    
const int mod = 1e9 + 7;

long long  powr(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            res *= a, res %= mod;
        a *= a;
        a %= mod;
        b /= 2;
    }
    return res;
}
    
    int numSubseq(vector<int>& a, int target) {
        sort(a.begin(),a.end());
        long long  ans=0;
        int n = a.size();
        for(int i=0; i<n; i++)
        {
            long long KahaTak = upper_bound(all(a),target-a[i])-a.begin()-1;
            long long abhiwala = i;
            if(KahaTak > abhiwala)
            {
                long long  kitneNum = KahaTak-abhiwala;
                long long totalSequence = powr(2,kitneNum);
                totalSequence--;
                totalSequence %= mod;
                ans += totalSequence;
                ans%= mod;
            }
            if(2*a[i] <= target)
            {
                ans+=1;
                ans%=mod;
            }
        }
        return ans%mod;
    }
};