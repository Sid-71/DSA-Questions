class Solution {
public:
    string mergeAlternately(string a, string b) {
        int i1 =0;
        int i2 =0 ;
        string res = "";
        while(i1<a.size() or i2 < b.size()){
            if(i1<a.size())
            {
                res+=a[i1];
                i1++;
            }
            if(i2<b.size())
            {
                res+=b[i2];
                i2++;
            }
        }
        return res;
    }
};