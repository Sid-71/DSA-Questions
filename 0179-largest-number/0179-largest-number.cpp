

 

class Solution {
public:
    static  bool cmp(string a,string b)
{
  string d1 = a+b;
  string d2 = b+a;
  return d1>d2;
}

    string largestNumber(vector<int>& nums) {
     unordered_map<int,vector<string>>m;
    // storing 
    for(int i=0; i<nums.size(); i++)
    {
       string s = to_string(nums[i]);
       int val1 = s[0]-'0';
        m[val1].push_back(s);
    }
     
     string res = "";
    for(int cur = 9; cur>=0; cur--)
    {
        if(!m.count(cur))continue;
        vector<string> temp = m[cur];
        sort(temp.begin(),temp.end(),cmp);
         for(int i=0; i<temp.size(); i++)
        {
            res+= temp[i];
        }
    }
    
        if(res[0] == '0')return "0";
      return res;

    }
};