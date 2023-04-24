class Solution {
public:
    string robotWithString(string s) {
  
     vector<int>freq(26,0);
     for(auto i : s)freq[i-'a']++;
     int mg = 0;
        stack<char>st;
        string result = "";
     for(int i=0; i<s.size(); i++)
     {
         while(freq[mg] == 0){
             mg++;
         }
        
         if(mg >= 26)
         {
             break;
         }
         char toFind = char(97+mg);
       
         while(!st.empty())
         {
            char u = st.top();
             if(u <= toFind)
             {
                 result += u;
                 st.pop();
             }
             else {
                 break;
             }
         }
         
         while(s[i] != toFind)
         {
           freq[s[i]-'a']--;
           st.push(s[i]);           
             i++;
         }
         
         result += toFind;
         freq[toFind-'a']--;
     }
        
        while(!st.empty())
        {
            result += st.top();
            st.pop();
        }
        return result;
        
    }
};