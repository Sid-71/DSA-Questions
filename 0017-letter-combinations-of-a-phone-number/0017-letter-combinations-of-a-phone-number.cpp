class Solution {
public:
    vector<string>ans;
   void combinations( map<int,vector<char>>&m,string s,int i,string curr,int val)
   {
     if(val == s.size())
     {
         if(curr.size()!=0 )
         {
            ans.push_back(curr);
          }
     }
       if(i >= s.size())
       {
           return;
       }
       
      auto a = m[s[i]-'0'];
       for(auto x: a)
       {
           curr.push_back(x);
           combinations(m,s,i+1,curr,val+1);
           curr.pop_back();
       }
       
}
    
    
    vector<string> letterCombinations(string s) {
        map<int,vector<char>>m;
        if(s.size() == 0){
   return {};
        }
        int cnt =0;
        ans.clear();
        int t =2; 
        for(char ch = 'a'; ch<='z'; ch++)
        {
            m[t].push_back(ch);
            cnt++;
            if(cnt == 3)
            {
                cnt = 0;
                t++;
                if(t == 7)
                {
                break;
                }
            }
        
        }
        m[7] = {'p','q','r','s'};
        m[8] = {'t','u','v'};
        m[9] = {'w','x','y','z'};
        
        
        combinations(m,s,0,"",0);
            return ans;
    }
};