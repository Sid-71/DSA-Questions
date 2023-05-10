class Solution {
public:
    string breakPalindrome(string s) {
    int start=0;
    int end = s.size()-1;
   if(s.size() == 1)return "";
    while(start <= end)
    {
        if(start!= end and s[start] != 'a')
        {
            s[start] = 'a';
            return s;
        }
        if(start == end)
        {
           break;
        }
        start++;
        end--;
    }
        s[s.size()-1] = 'b';
        return s;
    }
};